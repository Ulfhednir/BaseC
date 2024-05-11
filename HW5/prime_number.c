#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    for (int i = 2; i<a; i++)
    {
        if (a%i == 0)
        {
        printf("NO");
        return 0;
        }
    }
    if (a == 1)
        {
            printf("NO");
            return 0;
        }
    else printf("YES");
    return 0;

}
