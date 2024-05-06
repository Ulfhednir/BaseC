#include <stdio.h>
int main(void)
{
    int a, max=0;
    scanf("%d", &a);
    for (int i=3; i>0; i--)
        {
            int n = a%10;
            if (n > max) max = n;
            a/=10;
        }
    printf("%d\n", max);

    return 0;

}

