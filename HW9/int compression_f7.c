#include <stdio.h>
#include <ctype.h>

int compression(int a[], int b[], int N);
int Input(int *arr);
void Print_Mass(int *arr, int len);

int main(void)
{
    enum
    {
        SIZE = 100
    };
    int arr[SIZE];
    int len = Input(arr);
    int res[len];
    int count = compression(arr, res, len);
    Print_Mass(res, count);
    return 0;
}

#include <stdio.h>

int compression(int a[], int b[], int N)
{
    if (N == 0)
    {
        return 0;
    }
    int count = 0;
    int current_value = a[0];
    int current_length = 1;
    if (a[0] == 1)
        b[count++] = 0;
    for (int i = 1; i < N; ++i)
    {
        if (a[i] == current_value)
        {
            current_length++;
        }
        else
        {

            b[count++] = current_length;
            current_value = a[i];
            current_length = 1;
        }
    }

    b[count++] = current_length;

    return count;
}

int Input(int arr[])
{
    int len = 0, sign = 0, num = 0;
    char c;
    while (1)
    {
        c = getchar();
        if (c == '-')
        {
            sign = 1;
        }
        else if (c != ' ' && c != '\n')
        {
            num = num * 10;
            num = sign ? num - c + '0' : num + c - '0';
        }
        else
        {
            arr[len] = num;
            len++;
            num = 0;
            sign = 0;
            if (c == '\n')
            {
                break;
            }
        }
    }
    return len;
}

void Print_Mass(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
}
