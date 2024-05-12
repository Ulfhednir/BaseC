#include <stdio.h>
int is_digit();

int main(void)
{
    printf("%d", is_digit());
    return 0;
}

int is_digit()
{
        int sum = 0;
        char symbol;
        for(scanf("%c", &symbol) ; symbol != '.' ; scanf("%c", &symbol))
        {
        if ( symbol >='0' &&  symbol <= '9')
            sum ++;
        }
        return sum;
}
