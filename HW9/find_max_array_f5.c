#include <stdio.h>

int find_max_array(int size, int a[]);
int Input(int *arr);

int main(void)
{
  enum
  {
    SIZE = 100
  };
  int arr[SIZE];
  Input(arr);
  int max = find_max_array(SIZE, arr);
  printf("%d", max);
  return 0;
}

int find_max_array(int size, int a[])
{
  if (size <= 0)
  {
    return -1;
  }

  int max = a[0];
  for (int i = 1; i < size; ++i)
  {
    if (a[i] > max)
    {
      max = a[i];
    }
  }

  return max;
}

int Input(int arr[])
{
  int len = 0, sign = 0, num = 0;
  char c;
  while (1)
  {
    c = getchar();
    if (c == '-')
    {
      sign = 1;
    }
    else if (c != ' ' && c != '\n')
    {
      num = num * 10;
      num = sign ? num - c + '0' : num + c - '0';
    }
    else
    {
      arr[len] = num;
      len++;
      num = 0;
      sign = 0;
      if (c == '\n')
      {
        break;
      }
    }
  }
  return len;
}
