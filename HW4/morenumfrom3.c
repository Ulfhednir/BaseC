#include <stdio.h>
int main(void)
{
    int a,b,c, max = 0;
    scanf("%d%d%d", &a, &b, &c);
    if ((a > b) && (a > c))
        max = a;
    else if (b > c)
        max = b;
    else
        max = c;

    printf("%d\n", max);

    return 0;

}

