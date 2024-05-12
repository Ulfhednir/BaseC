#include <stdio.h>

int power (int num, int degree)
    {
    int pow = 1;
    while (degree>0)
        {
            pow *= num;
            degree--;
        }
    return pow;
    }

int main(void)
{
    int number, deg;
    scanf("%d%d", &number, &deg);
    int res = power(number, deg);
    printf("%d", res);

    return 0;

}
