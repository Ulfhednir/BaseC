#include <stdio.h>

int sum (int x)
    {
    int sum_include=0;
    for (int i=x; i>0; i--)
        sum_include += i;
    return sum_include;
    }

int main(void)
{
    int N;
    scanf("%d", &N);
    printf("%d", sum(N));

    return 0;
}
