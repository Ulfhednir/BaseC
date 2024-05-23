#include <stdio.h>

int print_num (int num)
    {
    if (num == 0)
    {
        return 0;
    }
    print_num(num-1);
    printf("%d ", num);
    return 0;
    }

int main(void)
{
int a;
scanf("%d", &a);
print_num(a);

return 0;

}
