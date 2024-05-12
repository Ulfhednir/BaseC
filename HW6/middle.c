#include <stdio.h>

int middle (int num_one, int num_two)
    {
    int mid = (num_one+num_two)/2;
    return mid;
    }

int main(void)
{
    int first_num, second_num;
    scanf("%d%d", &first_num, &second_num);
    printf("%d", middle(first_num, second_num));

    return 0;
}
