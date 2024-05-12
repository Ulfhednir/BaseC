#include <stdio.h>
void is_happy_number(int n);

int main(void)
{
    int a;
    scanf("%d", &a);
    is_happy_number(a);
    return 0;
}

void is_happy_number(int n)
{
        int sum = 0;
        int mul = 1;
        while (n)
        {
            sum += n%10;
            mul *= n%10;

            n/=10;
        }

        if (sum == mul)
            printf("YES");
        else printf("NO");
}
