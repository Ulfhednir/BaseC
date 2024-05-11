#include <stdio.h>
int main(void)
{
    int a, order = 0;
    scanf("%d", &a);
    do
    {
        order++;
        a/=10;
    }
    while(a);
    if (order == 3) printf("YES");
    else printf("NO");
    return 0;

}

