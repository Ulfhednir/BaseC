#include <stdio.h>

int input(int *arr, int n);
void sort_even_odd(int n, int a[]);

int main(void)
{
    enum
    {
        SIZE = 20
    };
    int arr[SIZE];
    int size = input(arr, SIZE);
    sort_even_odd(size, arr);
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}

void sort_even_odd(int n, int a[])
{
    int even_mass[n];
    int odd_mass[n];
    int len_odd = 0, len_even = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even_mass[len_even] = a[i];
            len_even++;
        }
        else
        {
            odd_mass[len_odd] = a[i];
            len_odd++;
        }
    }
    for (int i = 0; i < len_even; i++)
        a[i] = even_mass[i];
    for (int i = len_even, j = 0; i < (len_even + len_odd); i++, j++)
        a[i] = odd_mass[j];
}

int input(int *arr, int n)
{
    int len;
    int num = 0;
    char c;
    while ((c = getchar()) != '\n')
    {
        if (c != ' ' && c != '\n')
        {
            num = num * 10 + c - '0';
        }
        else
        {

            arr[len] = num;
            len++;
            num = 0;
            if (c == '\n')
            {
                break;
            }
        }
    }
    arr[len] = num;
    len++;
    return len;
}
