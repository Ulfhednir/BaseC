#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && a >= c && b+c > a) printf("YES");
    else if (b >= a && b >= c && a+c > b) printf("YES");
    else if (c >= b && c >= a && a+b > c) printf("YES");
    else printf("NO");


    return 0;

}

