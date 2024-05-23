#include <stdio.h>

int print_digits(int n);

int main(void)
{
    int a;
    scanf("%d", &a);
    print_digits(a);

return 0;
}

int print_digits(int n)
    {
        if (!n)
            return 0;
        print_digits(n/10);
        printf("%d ", n%10);
        return 0;
    }

