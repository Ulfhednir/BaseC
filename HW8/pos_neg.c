#include <stdio.h>

void Input(int* pos, int* neg, int* count, int n);

void Print_Mass(int *arr, int len);


int main(void)
{
enum {SIZE = 10};
int pos[SIZE];
int neg[SIZE];
int count[2];
Input(pos, neg, count, SIZE);
Print_Mass(pos, count[0]);
Print_Mass(neg, count[1]);

return 0;

}

void Print_Mass(int *arr, int len)
{
for (int i=0; i<len; i++)
    printf("%d  ", arr[i]);
}

void Input(int* pos, int* neg, int* count, int n)
    {
        int pos_count = 0, neg_count = 0, a;
        for (int i=0; i<n; i++)
        {
            scanf("%d", &a);
            if (a<0)
            {
                neg[neg_count] = a;
                neg_count++;
            }
            else if (a>0)
            {
                pos[pos_count] = a;
                pos_count++;
            }
        }
        count[0] = pos_count;
        count[1] = neg_count;
    }


