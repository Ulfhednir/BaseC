#include <stdio.h>

// Функция для вывода числа в бинарном виде
void print_binary(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned int N;
    int K;
    printf("Enter a 32-bit unsigned integer N and an integer K (1 <= K <= 31): ");
    scanf("%u%d", &N, &K);

    // Создаем маску для K младших битов
    unsigned int mask = (1U << K) - 1;

    // Применяем маску к числу N
    unsigned int result = N & mask;

    printf("N: %u\n", N);
    printf("N in hex: %x\n", N);
    printf("N in binary: ");
    print_binary(N);
    printf("Mask: %u\n", mask);
    printf("Mask in hex: %x\n", mask);
    printf("Mask in binary: ");
    print_binary(mask);
    printf("Result: %u\n", result);
    printf("Result in hex: %x\n", result);
    printf("Result in binary: ");
    print_binary(result);

    // Ожидание ввода любой клавиши перед завершением
    printf("Press any key to exit...");
    getchar(); // Поглощаем символ новой строки оставшийся после scanf
    getchar(); // Ожидаем нажатие клавиши

    return 0;
}