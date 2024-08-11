#include <stdio.h>

int main()
{
    int N;
    char c;
    scanf("%d", &N);

    while ((c = getchar()) != EOF && c != '.')
    {
        if ((c >= 'a') && (c <='z'))
        {
            putchar(((c - 'a' + N) % 26) + 'a');
        }
        else if ((c >= 'A') && (c <='Z'))
        {
            putchar(((c - 'A' + N) % 26) + 'A');
        }

        else if (c == ' ')
            putchar(c);
    }
    putchar('.');
    return 0;
}

