#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#define MAX_LENGTH 10000


void read_string(FILE *file, char *str);
void low_n_upper(FILE *file, const char *str);


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
    low_n_upper(output, str);


    fclose(input);
    fclose(output);

    return 0;
}

void low_n_upper(FILE *file, const char *str)
{
    int len = strlen(str);
    int count_lowercase = 0;
    int count_uppercase = 0;
    for (int i = 0; i < len; i++)
    {
        if (islower(str[i]))
            count_lowercase++;
        else if (isupper(str[i]))
            count_uppercase++;

    }
    fprintf(file, "%d %d\n", count_lowercase, count_uppercase);
}

void read_string(FILE *file, char *str)
{
    fgets(str, MAX_LENGTH + 1, file);
}

