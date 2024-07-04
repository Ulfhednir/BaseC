#include <stdio.h>

void PrintDigist(int arr[], int len);
void digitCounter(char *arr, int *count);

int main(void)
{
    enum
    {
        SIZE = 1000
    };
    char arr[SIZE];
    int counter[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    scanf("%s", arr);
    digitCounter(arr, counter);
    PrintDigist(counter, 10);

    return 0;
}

void PrintDigist(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        if (arr[i] > 0)
            printf("%d %d\n", i, arr[i]);
}

void digitCounter(char *arr, int *count)
{
    for (int i = 0; arr[i] != 0; i++)
        count[arr[i] - '0']++;
}
