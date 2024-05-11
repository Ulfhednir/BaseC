#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    for (int i=1; i<=a; i++)
    {
        int square = i*i;
        int cube = square * i;
        printf("%d  %d  %d\n" , i, square, cube);
    }
    return 0;

}

