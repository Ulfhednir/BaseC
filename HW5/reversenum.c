#include <stdio.h>
int main(void)
{
    int a, new_num=0, exp=1, counter;
    scanf("%d", &a);
    counter = a;
    if (a == 0)
        {
            printf("%d", 0);
            return 0;
        }
    while (counter)
    {
        //printf("exp=%d\n", exp);
        exp*=10;
        counter/=10;
    }
    exp/=10;
    while(a)
    {
        new_num += (a%10)*exp;
        //printf("a/10 = %d, exp = %d\n", a, exp);
        a/=10;
        exp/=10;
    }
    printf("%d", new_num);
    return 0;

}
