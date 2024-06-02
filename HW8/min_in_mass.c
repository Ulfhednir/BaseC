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

int min(int* arr, int n)
{
    int i, min;
    min = arr[0];
    for (i=1; i<n; i++)
    {
        if (arr[i]<min)
            min = arr[i];
    }
    return min;
}

int main(void)
{
    enum {SIZE = 5};
    int arr[SIZE];
    input(arr, SIZE);
    printf("%d", min(arr, SIZE));

    return 0;
}

