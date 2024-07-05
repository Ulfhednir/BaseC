#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000

int is_palindrome(const char *str);
void read_string(FILE *file, char *str);
void write_result(FILE *file, const char *result);

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
    str[strcspn(str, "\n")] = '\0';
    int result = is_palindrome(str);
    if (result)
    {
        write_result(output, "YES");
    }
    else
    {
        write_result(output, "NO");
    }

    fclose(input);
    fclose(output);

    return 0;
}

int is_palindrome(const char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

void read_string(FILE *file, char *str)
{
    fgets(str, MAX_LENGTH + 1, file);
}

void write_result(FILE *file, const char *result)
{
    fprintf(file, "%s\n", result);
}
