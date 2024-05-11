#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    int prev_num = a%10;
    if (a == 0)
    {
        printf("YES");
        return 0;
    }
    a/=10;
    do
    {
        int cur_num = a%10;
        if (prev_num <= cur_num)
        {
            printf("NO");
            return 0;
        }
        prev_num = cur_num;
        a/=10;
    }
    while(a);
    printf("YES");
    return 0;

}
