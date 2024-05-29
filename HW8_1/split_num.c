#include <stdio.h>

void Print_Mass(int *arr, int len);

int number_of_digits(int n);

void num_in_mass(int *arr, int len, int n);

int main(void)
{
int n;
scanf("%d", &n);
int SIZE = number_of_digits(n);
int numbers[SIZE];
num_in_mass(numbers, SIZE, n);
Print_Mass(numbers, SIZE);

return 0;

}

int number_of_digits(int n)
{
    int counter=0;
    if (n/10==0)
        return 1;
    while(n)
    {
        n/=10;
        counter++;
    }
    return counter;
}

void num_in_mass(int *arr, int len, int n)
{
    for (int i=0; i<len; i++)
    {
        arr[i] = n%10;
        n/=10;
    }
}


void Print_Mass(int *arr, int len)
{
for (int i=len-1; i>=0; i--)
    printf("%d  ", arr[i]);
}
