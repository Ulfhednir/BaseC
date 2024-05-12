#include <stdio.h>

int function (int x)
    {
    if ((x>=-2)&&(x<2)) x*=x;
    else if (x>=2) x = x*x+4*x+5;
    else x = 4;
    return x;
    }

int main(void)
{
    int a = 1, max = 0;
    while (a)
        {
        scanf("%d", &a);
        int res = function(a);
        if (res > max) max = res;
        }

    printf("%d", max);

    return 0;
}
