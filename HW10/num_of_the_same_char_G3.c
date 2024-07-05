#include <stdio.h>


#define LINE 1000
char name_in[] = "input.txt";
char name_out[] = "output.txt";

char last_symbol (FILE *input);
void find_symbol (char search_char, int len, FILE *input, FILE *output);
int  line_length (FILE *input);

int main(int argc, char **argv)
{
    FILE *f_in, *f_out;
    f_in = fopen(name_in, "r");
    if (!f_in)
    {
        printf("Error occured while opening file \n");
        return 1;
    }

    f_out = fopen(name_out, "w");
    if (!f_out)
    {
        printf("Error occured while opening file \n");
        return 1;
    }
    char c = last_symbol(f_in);
    int line = line_length(f_in);
    find_symbol(c, line, f_in, f_out);

    fclose(f_in);
    fclose(f_out);
    return 0;
}

char last_symbol (FILE *input)
{
    fseek(input , -1 , SEEK_END);
    char c = fgetc(input);
    fseek(input, 0, SEEK_SET);
    return c;
}

void find_symbol (char search_char, int len, FILE *input, FILE * output)
{
    int count = 0;
    char c;
    while ((c = fgetc(input)) != EOF && (count != len - 1))
    {
        if (c == search_char)
        {
            fprintf(output, "%d ", count);
        }
        count++;
    }
}

int  line_length (FILE *input)
{
    int len = 0;
    char c;
    while ((c = fgetc(input)) != EOF)
        len++;
    fseek(input, 0, SEEK_SET);
    return len;
}
