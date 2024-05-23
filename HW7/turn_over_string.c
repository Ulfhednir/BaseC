#include <stdio.h>

void reverse_string (void)
    {
    char symbol;
    if ((symbol = getchar()) != '.')
        reverse_string();
    if (symbol != '.')
        putchar(symbol);
    }

int main(void)
{

reverse_string();

return 0;

}
