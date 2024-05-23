#include <stdio.h>

void odds (void)
    {
    int num;
    scanf("%d", &num);
    if (num == 0)
        return;
    if (num%2 != 0)
        printf("%d ", num);
    odds();
    }

int main(void)
{

    odds();

return 0;
}
