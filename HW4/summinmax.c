#include <stdio.h>
int main(void)
{
    int a,b,c,d,e, min = 0, max = 0;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if (a>b)
        {
            max = a;
            min = b;
        }
    else
        {
            max = b;
            min = a;
        }
    if (c>max)
        {
            max = c;
        }
    else if (c < min)
        {
            min = c;
        }
    if (d>max)
        {
            max = d;
        }
    else if (d < min)
        {
            min = d;
        }
    if (e>max)
        {
            max = e;
        }
    else if (e < min)
        {
            min = e;
        }
    printf("%d\n", min+max);

    return 0;

}

