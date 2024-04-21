#include <stdio.h>

int main(void)
{
    printf(" Truth table for expression A -> B \n");
    printf(" A    B    |   A -> B \n");
    printf(" __________|__________\n");
    printf(" 0    0    |     1    \n");
    printf(" 0    1    |     1    \n");
    printf(" 1    0    |     0    \n");
    printf(" 1    1    |     1    \n\n\n");

    printf(" Truth table for expression A <-> B \n");
    printf(" A    B    |   A <-> B \n");
    printf(" __________|__________\n");
    printf(" 0    0    |     1    \n");
    printf(" 0    1    |     0    \n");
    printf(" 1    0    |     0    \n");
    printf(" 1    1    |     1    \n");


    return 0;

}

