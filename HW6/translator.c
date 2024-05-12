#include <stdio.h>

int translator (int num, int syst)
    {
    int total = 0;
    int deg = 1;
        while (num)
        {
            int rem = num%syst;
            total += rem*deg;
            num/=syst;
            deg*=10;
        }
    return total;
    }

int main(void)
{
    int number, system;
    scanf("%d%d", &number, &system);
    printf("\n%d", translator(number, system));

    return 0;

}
