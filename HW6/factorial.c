#include <stdio.h>

int factorial (int num)
    {
    int fact=1;
    for(int i=1;i<=num;i++) fact*=i;
    return fact;
    }

int main(void)
{
int N;
scanf("%d", &N);
printf("%d", factorial(N));

return 0;

}
