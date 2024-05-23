#include <stdio.h>

int recurs_power(int n, int p);

int main(void)
{
    int a,b;
    scanf("%d%d", &a, &b);
    printf("%d", recurs_power(a, b));

return 0;
}

int recurs_power(int n, int p)
    {
        static int pow = 1;
        if (p==0)
            return 1;
        pow *= n;
        recurs_power(n, p-1);
        return pow;
    }

