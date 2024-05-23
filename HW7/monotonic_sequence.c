#include <stdio.h>

void monotonic_sequence (int num, int num_of_print);

int main(void)
{
int a;

scanf("%d", &a);

monotonic_sequence(a, 0);

return 0;
}

void monotonic_sequence (int num, int num_of_print)
{
    for (int i = 1; i<=num_of_print; i++)
    {
        printf("%d ", num_of_print);
        num--;
        if (num == 0)
            return;
    }
    monotonic_sequence(num, num_of_print+1);
}
