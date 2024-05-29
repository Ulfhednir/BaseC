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
int print(int* arr, int n)
    {
        int i;
        for (i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }
        return i;
    }

int min_max(int* arr, int* result_arr, int n)
    {
        int i, min, min_num = 1, max_num = 1, max;
        //int result_arr[4];
        min = arr[0];
        max = arr[0];
        for (i=1; i<n; i++)
        {
            if (arr[i]<min)
                {
                    min = arr[i];
                    min_num = i+1;
                }
        }
        for (i=1; i<n; i++)
        {
            if (arr[i]>max)
                {
                    max = arr[i];
                    max_num = i+1;
                }
        }
        result_arr[0] = max_num;
        result_arr[1] = max;
        result_arr[2] = min_num;
        result_arr[3] = min;
        return i;
    }

int main(void)
{
enum {SIZE = 10};
enum {RES_SIZE = 4};
int arr[SIZE];
int result_arr[RES_SIZE];
input(arr, SIZE);
min_max(arr, result_arr, SIZE);
print(result_arr, RES_SIZE);

return 0;

}

