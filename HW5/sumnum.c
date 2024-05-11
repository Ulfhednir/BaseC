#include <stdio.h>
int main(void)
{
    int a, sum = 0;
    scanf("%d", &a);
    do
    {
        sum+=a%10;
        a/=10;
    }
    while(a);
    printf("%d " , sum);
    return 0;

}

