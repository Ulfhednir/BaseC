#include <stdio.h>
int gcd(int x, int y)
{
        while ((x != 0)&&(y != 0))
    {
        if (x>y)
            x%=y;
        else y%=x;
    }
    return x+y;
}


int main(void)
{
    int a, b;

    scanf("%d%d", &a, &b);
    printf("%d", gcd(a, b));

    return 0;

}
