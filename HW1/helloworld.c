#include <stdio.h>
#include <locale.h>


int main(void)
{
    setlocale(LC_ALL, ".utf-8");
    printf("Hello world!\n");
    return 0;

}

