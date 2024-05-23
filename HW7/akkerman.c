#include <stdio.h>

int akkerman(int m, int n);

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", akkerman(a, b));

return 0;
}

int akkerman(int m, int n)
    {
        if (m == 0)
            return n+1;
        else if (n==0)
            return akkerman(m-1, 1);
        else
            return akkerman(m-1, akkerman(m, n-1));

    }

