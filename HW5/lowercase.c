#include <stdio.h>

int main(void)
{
char symbol=' ';
    for(scanf("%c", &symbol) ; symbol != '.' ; scanf("%c", &symbol))
    {
        if ( symbol >='A' &&  symbol <= 'Z')
            symbol += 0x20;
        if  (symbol != '.')
            printf("%c", symbol);
    }
    return 0;
}

