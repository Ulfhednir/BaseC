#include <stdio.h>

int convertor (int num)
    {
    if (num > 1)
        {
            convertor(num/2);
        }
    printf("%d", num%2);
    return 0;
    }

int main(void)
{
int a;
scanf("%d", &a);
convertor(a);

return 0;

}
