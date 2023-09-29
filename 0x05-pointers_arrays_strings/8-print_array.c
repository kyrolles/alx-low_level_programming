#include"main.h"

/**
  * print_array -  prints half of a string, followed by a new line.
  * @a: the array.
  * @n: the number of arry;
  *
  */

void print_array(int *a, int n)
{
int i = 0;

while (n--)
{
_putchar(a[i]);
_putchar(',');
_putchar(' ');
i++;
}
_putchar('\n');
}
