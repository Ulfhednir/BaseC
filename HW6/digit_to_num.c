#include <stdio.h>
int digit_to_num();

int char_to_num(char c);

int main(void)
{
    printf("%d", digit_to_num());
    return 0;
}

int digit_to_num()
{
        int sum = 0;
        char symbol;
        for(scanf("%c", &symbol) ; symbol != '.' ; scanf("%c", &symbol))
        {
        if ( symbol >='0' &&  symbol <= '9')
            {
            sum += char_to_num(symbol);
            }
        }
        return sum;
}

int char_to_num(char c)
{
    if ((c>='0')&&(c<='9'))
        return c - '0';
    return 0;
}
