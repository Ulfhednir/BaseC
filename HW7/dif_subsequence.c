#include <stdio.h>

int subsequence (int num1,int num2)
    {
    if (num1 == num2)
    {
        printf("%d", num2);
        return 0;
    }

    if (num1 >= num2)
        {
        printf("%d ", num1);
        subsequence(num1-1, num2);
        }
    if (num1 <= num2)
        {
        printf("%d ", num1);
        subsequence(num1+1, num2);
        }

    return 0;
    }

int main(void)
{
int a, b;
scanf("%d%d", &a, &b);

subsequence(a, b);

return 0;

}
