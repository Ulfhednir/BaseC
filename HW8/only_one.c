#include <stdio.h>

int Input(int* arr, int n);
char Is_Exsist(int* arr, int num, int pos, int len);
void only_one(int* in, int n);

int main(void)
{
    enum {SIZE = 10};
    int in[SIZE];
    Input(in, SIZE);
    only_one(in, SIZE);

    return 0;
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

char Is_Exsist(int* arr, int num, int pos, int len)
{
    char answer;
    for (int i=0; i<len; i++)
    {
        if (i == pos)
            continue;
        if (num == arr[i])
        {
            return answer = 'Y';
        }
    }
    return answer = 'N';
}

void only_one(int* in, int n)
{
    for (int i = 0; i<n; i++)
    {
        if  ((char) Is_Exsist(in,in[i], i, n) == 'N')
        {
            printf("%d ", in[i]);
        }
    }
}


