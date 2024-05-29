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


int pos_sum(int* arr,  int n)
    {
        int i, sum=0;
        for (i=0; i<n; i++)
        {
            if (arr[i]>0) sum+=arr[i];

        }

        return sum;
    }

int main(void)
{
enum {SIZE = 10};int arr[SIZE];

input(arr, SIZE);
printf("%d", pos_sum(arr, SIZE));

return 0;

}

