#include <stdio.h>
int main(void)
{
    int a, test_num, cur_num;
    scanf("%d", &a);
    do
    {
        cur_num = a;
        test_num = a;
        cur_num%=10;
        test_num/=10;
            while(test_num)
            {
                if (test_num%10 == cur_num)
                {
                    printf("YES");
                    return 0;
                }
            test_num/=10;
            }
        a/=10;
    }
    while (a);
    printf("NO");
    return 0;

}

