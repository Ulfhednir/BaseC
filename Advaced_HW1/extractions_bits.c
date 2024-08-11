#include <stdio.h>

int main() {
    unsigned int N;
    int K;
    scanf("%u %d", &N, &K);

    // Создаем маску с K младшими битами, равными 1.
    unsigned int mask = (1U << K) - 1;

    // Получаем K младших битов числа N.
    unsigned int result = N & mask;

    printf("%u\n", result);

    return 0;
}