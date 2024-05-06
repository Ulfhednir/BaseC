#include <stdio.h>
int main(void)
{
    int a, sum=1;
    scanf("%d", &a);
    for (int i=3; i>0; i--)
        {
            sum*=a%10;
            a/=10;
        }
    printf("%d\n", sum);

    return 0;

}

