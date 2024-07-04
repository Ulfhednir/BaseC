#include <stdio.h>

int input(int *arr, int n);
void sort_array(int size, int a[]);
int isDigit(char c);

int main(void)
{
    enum
    {
        SIZE = 20
    };
    int arr[SIZE];
    int size = input(arr, SIZE);
    sort_array(size, arr);
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}

void sort_array(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (a[j - 1] > a[j])
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}

int input(int *arr, int n)
{
    int i;
    char c;
    while ((c = getchar()) != '\n')
    {
        if (isDigit(c))
        {
            int number = 0;
            do
            {
                number = number * 10 + c - '0';
                c = getchar();
            } while (isDigit(c));
            arr[i++] = number;
            if (c == '\n')
                break;
        }
    }
    return i;
}

int isDigit(char c)
{
    return ((c >= '0') && (c <= '9'));
}
