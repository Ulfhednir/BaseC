#include <stdio.h>

#define LINE 100

int main(int argc, char **argv)
{
    FILE *fi, *fo;
    char c;
    char str_file[LINE];
    fi = fopen("input.txt", "r");
    if (!fi)
    {
        printf("Error occured while opening file \n");
        return 1;
    }

    int count = 0;
    while (((c = getc(fi)) != EOF) && (c != '\n'))
        str_file[count++] = c;
    str_file[count] = '\0';

    fclose(fi);

    fo = fopen("output.txt", "w");
    if (!fo)
    {
        printf("Error occured while opening file \n");
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        if (i)
            fprintf(fo, ", ");
        fprintf(fo, "%s", str_file);
    }
    fprintf(fo, " %d", count);
    fclose(fo);
    return 0;
}

