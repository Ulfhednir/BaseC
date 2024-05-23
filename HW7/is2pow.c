#include <stdio.h>

int is2pow (int num, int i);

int main(void)
{
    int a, i = 1;
    scanf("%d", &a);
    is2pow(a, i);

return 0;
}



int is2pow (int num,int i)
    {
        //~ if (num ==1)
            //~ {
                //~ printf("NO");
                //~ return 0;
            //~ }
        if (i > num)
            {
                printf("NO");
                return 0;
            }
        if (i == num)
            {
                printf ("YES");
                return 1;
            }
        else
            return is2pow(num, i*=2);

        printf("NO");
        return 0;

    }

