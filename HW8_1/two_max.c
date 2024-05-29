#include <stdio.h>

int input(int* arr, int n)
    {
        int i;
        for (i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        return i;
    }


int sum_two_max(int* arr,  int n)
    {
        int i, first_max, second_max;
        first_max = arr[0];
        second_max = 0;
        for (i=1; i<n; i++)
        {
            if (arr[i]>first_max)
                {
                    second_max = first_max;
                    first_max = arr[i];
                }
            else if (arr[i]>second_max)
                {
                    second_max = arr[i];
                }
        }

        return (first_max + second_max);
    }

int main(void)
{
enum {SIZE = 10};int arr[SIZE];

input(arr, SIZE);
printf("%d", sum_two_max(arr, SIZE));

return 0;

}

