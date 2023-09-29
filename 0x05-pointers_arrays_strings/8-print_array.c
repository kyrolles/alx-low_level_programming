#include"main.h"

/**
  * print_array -  prints half of a string, followed by a new line.
  * @a: the array.
  * @n: the number of arry;
  *
  */

void print_array(int *a, int n)
{
while (n--)
{
_putchar(*a);
_putchar(',');
_putchar(' ');
a++;
}
_putchar('\n');
}
