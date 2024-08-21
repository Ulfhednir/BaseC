#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Структура для узла списка
struct list {
    char word[20];
    struct list *next;
};

// Функция добавления слова в список
struct list* add_to_list(struct list *head, char *word) {
    struct list *new_node = (struct list*)malloc(sizeof(struct list));
    strcpy(new_node->word, word);
    new_node->next = NULL;

    if (head == NULL) {
        return new_node;
    } else {
        struct list *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
    return head;
}

// Функция для обмена элементов списка
void swap_elements(struct list *a, struct list *b) {
    char temp[20];
    strcpy(temp, a->word);
    strcpy(a->word, b->word);
    strcpy(b->word, temp);
}

// Функция для сортировки списка по алфавиту
void sort_list(struct list *head) {
    if (head == NULL) return;

    struct list *i, *j;
    for (i = head; i->next != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (strcmp(i->word, j->word) > 0) {
                swap_elements(i, j);
            }
        }
    }
}

// Функция для вывода списка
void print_list(struct list *head) {
    struct list *current = head;
    while (current != NULL) {
        printf("%s ", current->word);
        current = current->next;
    }
    printf("\n");
}

// Функция для удаления списка и освобождения памяти
void delete_list(struct list *head) {
    struct list *current = head;
    while (current != NULL) {
        struct list *next_node = current->next;
        free(current);
        current = next_node;
    }
}

// Главная функция программы
int main() {
    char input[1001];
    fgets(input, sizeof(input), stdin);

    // Удаление точки в конце строки
    int len = strlen(input);
    if (input[len - 1] == '.') {
        input[len - 1] = '\0';
    }

    struct list *head = NULL;
    char *word = strtok(input, " ");
    while (word != NULL) {
        head = add_to_list(head, word);
        word = strtok(NULL, " ");
    }

    sort_list(head);
    print_list(head);
    delete_list(head);

    return 0;
}
