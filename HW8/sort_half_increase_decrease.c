#include <stdio.h>

int Input(int* arr, int n);
void SwapArr(int *arr, int i, int j);
void Print_Mass(int *arr, int len);
void Sort_Increase(int* arr, int n);
void Sort_Decrease(int* arr, int n);

int main(void)
{
    enum {SIZE = 10};
    int arr[SIZE];
    Input(arr, SIZE);
    Sort_Increase(arr, SIZE/2);
    Sort_Decrease(arr+SIZE/2, SIZE/2);
    Print_Mass(arr, SIZE);

    return 0;
}

void SwapArr(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr [j];
    arr[j] = temp;
}

void Print_Mass(int *arr, int len)
{
    for (int i=0; i<len; i++)
        printf("%d  ", arr[i]);
}

int Input(int* arr, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return i;
}

void Sort_Increase(int* arr, int n)
{
    int noSwap;
    for (int i=0; i<n; i++)
    {
        noSwap = 1;
        for (int j=n-1; j>i; j--)
        {
            if (arr[j-1]>arr[j])
            {
                SwapArr(arr, j-1, j);
                noSwap = 0;
            }
        }
        if (noSwap)
            break;
    }
}

void Sort_Decrease(int* arr, int n)
{
    int noSwap;
    for (int i=0; i<n; i++)
    {
        noSwap = 1;
        for (int j=n-1; j>i; j--)
        {
            if (arr[j-1]<arr[j])
            {
                SwapArr(arr, j-1, j);
                noSwap = 0;
            }
        }
        if (noSwap)
            break;
    }
}

