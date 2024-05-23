#include <stdio.h>

int rec_num (int num)
    {
    if (num == 0)
    {
        return 1;
    }
    printf("%d ", num%10);
    rec_num(num/10);

    return 0;
    }

int main(void)
{
int a;
scanf("%d", &a);
if (a==0)
    {
        printf("%d", a);
        return 0;
    }
rec_num(a);

return 0;

}
