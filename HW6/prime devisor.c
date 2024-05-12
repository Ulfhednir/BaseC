#include <stdio.h>

int prime_devisor (int num)
    {
    int div = 2;
    while (num != 1)
    {
        if (num%div == 0)
        {
            printf("%d ", div);
            num /= div;
        }
        else div++;
    }
    return 0;
    }

int main(void)
{
int N;
scanf("%d", &N);
prime_devisor(N);

return 0;

}
