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

int reverse(int* arr, int b, int n)
{
    int i=b,j=n;
    for (i=b; i<j; i++, j--)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j] = temp;
    }
    return 0;
}

int main(void)
{
    enum {SIZE = 10};
    int arr[SIZE];
    input(arr, SIZE);
    int num_from = 0;
    int num_too = SIZE/2-1;
    reverse(arr, num_from, num_too);
    num_from = SIZE/2;
    num_too = SIZE-1;
    reverse(arr, num_from, num_too);
    print(arr, SIZE);

    return 0;
}

