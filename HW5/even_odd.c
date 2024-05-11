#include <stdio.h>
int main(void)
{
    int a, even = 0, odd = 0;
    scanf("%d", &a);
    while(a)
    {
        if (a%10%2) odd++;
        else even++;
        a/=10;
    }
    printf("%d %d", even, odd);
    return 0;

}
