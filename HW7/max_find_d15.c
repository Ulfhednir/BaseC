#include <stdio.h>

int max_find (void);

int main(void)
{

    printf("%d", max_find());
return 0;
}

int max_find (void)
    {
    int num;
    static int max = -100;
    scanf("%d", &num);
    if (num == 0)
        return 0;

    if (num > max)
        max = num;
    max_find();
    return max;
    }
