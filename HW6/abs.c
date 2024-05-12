#include <stdio.h>

int abs (int num)
    {
    if (num<0) num*=-1;
    return num;
    }

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d", abs(a));

    return 0;

}
