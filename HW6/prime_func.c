#include <stdio.h>
int is_prime(int a)
{
   if (a == 0)
   {
        printf("NO");
        return 0;
    }
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
    return 1;
}

int main(void)
{
    int x;
    scanf("%d", &x);
    is_prime(x);

    return 0;
}

