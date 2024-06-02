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

float average(int* arr, int n)
{
    int i, sum = 0;
    for (i=0; i<n; i++)
    {
        sum += arr[i];
    }
    return (float)sum/n;
}

int main(void)
{
    enum {SIZE = 12};
    int arr[SIZE];
    input(arr, SIZE);
    printf("%.2f", average(arr, SIZE));

    return 0;
}

