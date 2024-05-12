#include <stdio.h>

unsigned long long power (unsigned long long num,int degree)
    {
    unsigned long long int pow = 1;
    while (degree>0)
        {
            pow *= num;
            degree--;
        }
    return pow;
    }

unsigned long long chess (unsigned long long x)
    {
    unsigned long long res = power(2,x-1);
    return res;
    }



int main(void)
{
    unsigned long long n;
    scanf("%llu", &n);
    printf("%llu", chess(n));

    return 0;
}
