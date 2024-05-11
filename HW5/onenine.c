#include <stdio.h>
int main(void)
{
    int a, counter = 0;
    scanf("%d", &a);
    do
    {
        if (a%10 == 9) counter++;
        a/=10;
    }
    while (a);
    if (counter == 1)
        printf("YES");
    else printf("NO");
    return 0;

}

