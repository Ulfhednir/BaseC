#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    void *address;
    size_t size;
    char comment[64];
    struct list *next;
} list;

size_t totalMemoryUsage(list *head)
{
    if (head == NULL)
    {
        return 0;
    }

    size_t total_size = 0;

    list *current = head;

    while (current != NULL)
    {
        total_size += current->size;
        current = current->next;
    }

    return total_size;
}

int main()
{
    // Пример использования функции
    list block1 = {(void*)0x140525067852320, 10, "main.c", NULL};
    list block2 = {(void*)0x140525067852350, 30, "main.c", NULL};
    list block3 = {(void*)0x140525067852900, 100, "main.c", NULL};

    block1.next = &block2;
    block2.next = &block3;
    block3.next = NULL;

    size_t total_memory = totalMemoryUsage(&block1);

    if (total_memory > 0)
    {
        printf("Total memory used: %zu bytes\n", total_memory);
    } else
    {
        printf("List is empty\n");
    }

    return 0;
}
