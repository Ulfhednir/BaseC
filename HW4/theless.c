#include <stdio.h>
int main(void)
{
    int a,b,c,d,e, min = 0;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    min = a<b?a:b;
    min = c<min?c:min;
    min = d<min?d:min;
    min = e<min?e:min;
    printf("%d\n", min);

    return 0;

}

