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

int shift(int* arr, int n)
{
    int i;
    int first_num = arr[n-1];

    for (i=n-1; i>0; i--)
    {
        int j=i-1;
        arr[i]=arr[j];
    }
    arr[0]= first_num;
    return 0;
}

int main(void)
{
    enum {SIZE = 12};
    int arr[SIZE];

    input(arr, SIZE);
    for (int i = 0; i < 4; i++)
        shift(arr, SIZE);
    print(arr, SIZE);

    return 0;
}

