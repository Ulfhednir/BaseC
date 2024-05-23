#include <stdio.h>

int sum_num (int num)
    {
    int sum = num%10;
        if (num>=10)
        {
            sum+=sum_num(num/10);
        }
    return sum;
    }

int main(void)
{
int a;
scanf("%d", &a);
printf("%d",sum_num(a));

return 0;

}

