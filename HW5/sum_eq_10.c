#include <stdio.h>
int main(void)
{
    int a, sum = 0;
    scanf("%d", &a);
    while (a)
    {
        sum += a%10;
        a/=10;
    }
    if (sum == 10) printf("YES");
    else printf("NO");
    return 0;

}
