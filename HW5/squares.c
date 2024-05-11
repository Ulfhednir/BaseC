#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i=a; i<=b; i++)
    {
        int square = i*i;
        printf("%d " , square);
    }
    return 0;

}

