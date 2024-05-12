#include <stdio.h>


int brackets();

int main(void)
{
    brackets();
    return 0;
}

int brackets()
{
        char symbol;
        int count=0;
        scanf("%c", &symbol);
        if (symbol == ')')
        {
            printf("NO");
            return 0;
        }
        else count++;
        for(scanf("%c", &symbol) ; symbol != '.' ; scanf("%c", &symbol))
        {
        if (symbol =='\(')
            {
            count++;
            }
        else if (symbol ==')') count--;
        }

        if (count == 0) printf("YES");
        else printf("NO");
        return 0;
}

