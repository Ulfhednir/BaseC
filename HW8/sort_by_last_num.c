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

void SwapArr(int *arr, int i, int j);

void Sort(int* arr, int n)
    {
        int noSwap;
        for (int i=0; i<n; i++)
        {
            noSwap = 1;
            for (int j=n-1; j>i; j--)
            {
                if (arr[j-1]%10>arr[j]%10)
                {
                    SwapArr(arr, j-1, j);
                    noSwap = 0;
                }
            }
        if (noSwap)
            break;
        }
    }

int main(void)
{
enum {SIZE = 10};
int arr[SIZE];
input(arr, SIZE);
Sort(arr, SIZE);
for (int i=0; i<SIZE; i++)
    printf("%d ", arr[i]);

return 0;

}

void SwapArr(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr [j];
    arr[j] = temp;
}

