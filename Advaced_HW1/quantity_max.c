#include <stdio.h>

int main()
{
    int cur_num, max, counter = 1, N, i=1;
    scanf("%d", &N);
    scanf("%d", &cur_num);
    max = cur_num;
    while (i<N)
    {
        scanf("%d", &cur_num);
        if (cur_num > max)
        {
            max = cur_num;
            counter = 1;
        }
        else if (cur_num == max)
        {
            counter++;
        }

        i++;
    }
    printf("%d", counter);
    return 0;
}
