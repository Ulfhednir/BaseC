#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    void *address;
    size_t size;
    char comment[64];
    struct list *next;
} list;

void *findMaxBlock(list *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    void *max_address = head->address;
    size_t max_size = head->size;

    list *current = head->next;

    while (current != NULL)
    {
        if (current->size > max_size)
        {
            max_size = current->size;
            max_address = current->address;
        }
        current = current->next;
    }

    return max_address;
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

    void *max_block = findMaxBlock(&block1);
    if (max_block != NULL)
    {
        printf("Max block address: %p\n", max_block);
    } else
    {
        printf("List is empty\n");
    }

    return 0;
}
