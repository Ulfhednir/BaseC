#include <stdio.h>

int Input(int* arr, int n);
void SwapArr(int *arr, int i, int j);
void Print_Mass(int *arr, int len);
int Tens_Zero(int* in, int* out, int n);


int main(void)
{
    enum {SIZE = 10};
    int in[SIZE];
    int out[SIZE];
    Input(in, SIZE);
    int count = Tens_Zero(in, out, SIZE);
    Print_Mass(out, count);

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

int Tens_Zero(int* in, int* out, int n)
{
    int count = 0;
    for (int i=0; i<n; i++)
    {
        if (in[i]/10%10 == 0)
            {
                out[count++] = in[i];
            }
    }
    return count;
}


