#include <stdio.h>
int main(void)
{
    int a,b,c;
    //printf("Input three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    float d = (a + b + c);
    d = d/3;
    printf("%.2f\n",d);

    return 0;

}

