#include <stdio.h>

int num_of_units (int num);

int main(void)
{
int a;

scanf("%d", &a);

printf("%d", num_of_units(a));

return 0;
}

int num_of_units (int num)
{
    if (num < 1)
        return num;
    return num%2 + num_of_units(num/2);
}
