#include <stdio.h>
int main(void)
{
    int a;

    scanf("%d", &a);

    for (int i=10; i<=a; i++)
    {

    int n = i;
        int sum = 0;
        int mul = 1;
        while (n)
        {
            sum += n%10;
            mul *= n%10;

            n/=10;
        }
        //printf("i=%d, sum = %d, mul = %d\n", i, sum, mul);
        if (sum == mul)
            printf("%d ", i);

    }
    return 0;

}
