#include <stdio.h>

char capital (char c)
    {
    if ((c>='a')&&(c<='z')) c-=32;
    return c;
    }

int main(void)
{
char ch_inp;
    while (1)
    {
        scanf("%c", &ch_inp);
            if (ch_inp == '.')
                break;
        printf("%c", capital(ch_inp));
    }
    return 0;

}
