#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000

void read_string(FILE *file, char *str);
void replace_characters(char *str);
void write_string(FILE *file, const char *str);

int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (input == NULL || output == NULL)
    {
        fprintf(stderr, "Error opening file.\n");
        return 1;
    }

    char str[MAX_LENGTH + 1];

    read_string(input, str);
    replace_characters(str);
    write_string(output, str);

    fclose(input);
    fclose(output);

    return 0;
}

void read_string(FILE *file, char *str)
{
    fgets(str, MAX_LENGTH + 1, file);
}

void replace_characters(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
        {
            str[i] = 'b';
        }
        else if (str[i] == 'b')
        {
            str[i] = 'a';
        }
        else if (str[i] == 'A')
        {
            str[i] = 'B';
        }
        else if (str[i] == 'B')
        {
            str[i] = 'A';
        }
    }
}

void write_string(FILE *file, const char *str)
{
    fputs(str, file);
}