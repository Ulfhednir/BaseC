#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    int prev_num = 0, cur_num = 1, fib;
    printf("%d ", cur_num);

    for (int i=1; i<=a-1; i++)
    {
        fib = prev_num + cur_num;
        printf("%d ", fib);
        prev_num = cur_num;
        cur_num = fib;
    }
    return 0;

}
