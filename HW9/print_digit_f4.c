#include <stdio.h>
#include <ctype.h>

void print_digit(char s[]);

int main(void)
{
    enum
    {
        SIZE = 100
    };
    char arr[SIZE];
    fgets(arr, sizeof(arr), stdin);
    print_digit(arr);
    return 0;
}

void print_digit(char s[])
{
    int count[10] = {0};
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (isdigit(s[i]))
        {
            count[s[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; ++i)
    {
        if (count[i] > 0)
        {
            printf("%d %d\n", i, count[i]);
        }
    }
}
