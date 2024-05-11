#include <stdio.h>
int main(void)
{
    int a, counter = 0;

    scanf("%d", &a);

    while (a != 0)
    {
        counter++;
        scanf("%d", &a);
    }
    printf("%d", counter);
    return 0;

}
