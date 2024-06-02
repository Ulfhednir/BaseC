#include <stdio.h>

int Input(int* arr, int n);
void Print_Mass(int *arr, int len);
int Repeat_in(int* in, int* out, int n);

int main(void)
{
    enum {SIZE = 10};
    int in[SIZE];
    int out[SIZE];
    Input(in, SIZE);
    int count = Repeat_in(in, out, SIZE);
    Print_Mass(out, count);

    return 0;
}


void Print_Mass(int *arr, int len)
{
    for (int i=0; i<len; i++)
        printf("%d ", arr[i]);
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

int Repeat_in(int* in, int* out, int n)
{
    int count = 0;
    int flag = 1;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(in[i] == in[j])
            {
                for(int k = 0; k < count; k++)
                {
                    if(out[k] == in[i])
                    {
                        flag = 0;
                        break;
                    }
                    else
                        flag = 1;
                }
                if(flag == 1)
                    out[count++] = in[i];
            }
    return count;
}

