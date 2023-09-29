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
if (n != 0)
{
printf("%d, ", *a);
}
else
{
printf("%d", *a);
}
a++;
}
_putchar('\n');
}
