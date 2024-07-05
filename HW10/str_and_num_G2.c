#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    int i, n;
    FILE *in, *out;
    in = fopen("input.txt", "r");
    if (!in)
    {
        printf("Error occured while opening file \n");
        return 1;
    }

    out = fopen("output.txt", "w");
    if (!out)
    {
        printf("Error occured while opening file \n");
        return 1;
    }

    fscanf(in, "%d", &n);

    char c = 'A';
    char str_file[n + 2];
    char num = '2';

    for (i = 0; i < n; ++i)
    {
        if (i%2 == 0)
            str_file[i] = c++;
        else
        {
            str_file[i] = num;
            if (num == '8')
                num = '2';
            else
                num+=2;
        }
    }

    str_file[i] = '\0';
    fprintf(out, "%s", str_file);
    fclose(in);
    fclose(out);
    return 0;
}

