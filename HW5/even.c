#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    do
    {
        if (a%2!=0)
        {
        printf("NO");
        return 0;
        }
        a/=10;
    }
    while (a);
    printf("YES");
    return 0;

}

