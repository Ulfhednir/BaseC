#include <stdio.h>

int main()
{
    unsigned int N;
    int K;
    scanf("%u%d", &N, &K);

    unsigned int result = (N >> K) | (N << (32 - K));

    printf("%d", result);

    return 0;
}

