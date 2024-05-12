#include <stdio.h>

void even(int x)
{
    int sum;
    while (x)
    {
        sum+=x%10;
        x/=10;
    }
    if (sum%2!=0)
        {
        printf("NO");
        }
    else printf("YES");
}
int main(void)

{
    int a;
    scanf("%d", &a);
    even(a);
    return 0;

}

