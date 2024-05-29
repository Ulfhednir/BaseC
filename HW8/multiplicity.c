#include <stdio.h>

int Input(int* arr, int n);

void Print_Mass(int *arr, int len);

void multiplicity_range(int *arr, int n);


int main(void)
{
enum {SIZE = 8};
int multipl[SIZE] = {0};
int n;
scanf("%d", &n);
for (int i=2; i<=n; i++)
{
    multiplicity_range(multipl, i);
}

Print_Mass(multipl, SIZE);

return 0;

}

void multiplicity_range(int* arr, int n)
{
    for (int i=2; i<=9; i++)
    {
        if (n%i == 0)
        {
            arr[i-2]++;
        }
    }
}

void Print_Mass(int *arr, int len)
{
for (int i=0; i<len; i++)
    printf("%d  %d\n", i+2, arr[i]);
}
