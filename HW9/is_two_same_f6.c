#include <stdio.h>
#include <ctype.h>

int is_two_same(int size, int a[]);
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
    int res = is_two_same(len, arr);
    if (res)
        printf("YES");
    else
        printf("NO");
    return 0;
}

int is_two_same(int size, int a[])
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (a[i] == a[j])
            {
                return 1;
            }
        }
    }
    return 0;
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
