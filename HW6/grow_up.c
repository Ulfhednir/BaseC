#include <stdio.h>

int grow_up(int x)
{
    int prev_num, cur_num;
    prev_num = x%10;
    x/=10;
    while(x)
    {
        cur_num=x%10;
        if (prev_num >= cur_num)
            {
            printf("NO");
            return 0;
            }
        prev_num = cur_num;
        x/=10;
    }
    printf("YES");
    return 0;
}

int reverse_num(int x)
{
    int new_num=0, exp=1, counter;
    counter = x;
    if (x == 0)
        {
            return 0;
        }
    while (counter)    {

        exp*=10;
        counter/=10;
    }
    exp/=10;
    while(x)
    {
        new_num += (x%10)*exp;
        x/=10;
        exp/=10;
    }

    return new_num;
}
int main(void)

{
    int a;
    scanf("%d", &a);
    grow_up(reverse_num(a));
    return 0;

}

