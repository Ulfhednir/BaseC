#include <stdio.h>

int acounter(void);

int main(void)
{
    printf("%d", acounter());

return 0;
}

int acounter(void)
    {
        char c;
        static int sum;
        scanf("%c", &c);
        if   (c == '.')
            return 0;
        if (c == 'a')
            sum++;
        acounter();
        return sum;
    }

