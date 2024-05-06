#include <stdio.h>
int main(void)
{
    int a,b,c,d,e, max = 0;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    max = a>b?a:b;
    max = c>max?c:max;
    max = d>max?d:max;
    max = e>max?e:max;
    printf("%d\n", max);

    return 0;

}

