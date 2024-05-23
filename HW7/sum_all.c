#include <stdio.h>

int sum_num (int num)
    {
    if (num == 1)
    {
        return 1;
    }
    num += sum_num(num-1);

    return num;
    }

int main(void)
{
int a;
scanf("%d", &a);
printf("\n%d",sum_num(a));

return 0;

}
