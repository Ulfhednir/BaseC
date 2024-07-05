#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100
char name_in[] = "input.txt";
char name_out[] = "output.txt";

void read_words(FILE *file, char *word1, char *word2);
void count_characters(const char *word, int *count);
void find_common_unique_characters(const int *count1, const int *count2, char *result);
void sort_characters(char *characters);
void write_result(FILE *file, const char *result);

int main(int argc, char **argv)
{
    FILE *input = fopen(name_in, "r");
    FILE *output = fopen(name_out, "w");

    if (input == NULL || output == NULL) {
        fprintf(stderr, "Error opening file.\n");
        return 1;
    }

    char word1[MAX_LENGTH + 1];
    char word2[MAX_LENGTH + 1];
    int count1[26] = {0};
    int count2[26] = {0};
    char result[MAX_LENGTH + 1];

    read_words(input, word1, word2);
    count_characters(word1, count1);
    count_characters(word2, count2);
    find_common_unique_characters(count1, count2, result);
    sort_characters(result);
    write_result(output, result);

    fclose(input);
    fclose(output);
    return 0;
}

void read_words(FILE *file, char *word1, char *word2)
{
    fscanf(file, "%100s %100s", word1, word2);
}

void count_characters(const char *word, int *count)
{
    while (*word)
    {
        count[*word - 'a']++;
        word++;
    }
}

void find_common_unique_characters(const int *count1, const int *count2, char *result) {
    int index = 0;
    for (int i = 0; i < 26; i++) {
        if (count1[i] == 1 && count2[i] == 1) {
            result[index++] = 'a' + i;
        }
    }
    result[index] = '\0';
}

void sort_characters(char *characters)
{
    qsort(characters, strlen(characters), sizeof(char), (int (*)(const void *, const void *))strcmp);
}

void write_result(FILE *file, const char *result)
{
    for (int i = 0; result[i] != '\0'; i++)
    {
        fprintf(file, "%c ", result[i]);
    }
    fprintf(file, "\n");
}

