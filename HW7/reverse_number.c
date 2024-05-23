#include <stdio.h>

int rev_num (int num)
    {
    if (num == 0)
    {
        return 0;
    }
    printf("%d ", num);
    rev_num(num-1);


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
rev_num(a);

return 0;

}
