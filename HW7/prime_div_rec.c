#include <stdio.h>

int prime_devisor (int num,int div);

int main(void)
{
int a;

scanf("%d", &a);

prime_devisor(a, 2);

return 0;
}

int prime_devisor (int num, int div)
{
    if (num <= 1)
        return 0;
    if (num%div == 0)
        {
            printf("%d ", div);
            prime_devisor(num/=div, div);
        }
    else (prime_devisor(num, div+1));

    return 0;
}
