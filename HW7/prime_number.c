#include <stdio.h>

int is_prime(int n, int div)
    {
    if (n == div)
        return 1;
    if ((n>1)&&(n%div != 0))
        return is_prime(n, div+1);
    else
        return 0;
    }

int main(void)
{
int a;
scanf("%d", &a);
is_prime(a, 2 )? printf("YES") : printf("NO");

return 0;

}

