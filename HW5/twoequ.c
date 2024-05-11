#include <stdio.h>
int main(void)
{
    int a, flag = 0;
    scanf("%d", &a);
    int prev_num = a%10;
    a/=10;
    do
    {
        int cur_num = a%10;
        if (prev_num == cur_num)
        {
            flag = 1;
            break;
        }
        prev_num = cur_num;
        a/=10;
    }
    while(a);
    if (flag) printf("YES");
    else printf("NO");
    return 0;

}
