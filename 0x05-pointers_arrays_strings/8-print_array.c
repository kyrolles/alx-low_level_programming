#include"main.h"

/**
  * print_array -  prints half of a string, followed by a new line.
  * @a: the array.
  * @n: the number of arry;
  *
  */

void print_array(int *a, int n)
{
int r;
int i = 0;
r = n + 1;
while (r--)
{
if (n > i)
{
printf("%d, ", *a);
}
else
{
printf("%d", *a);
}
i++;
a++;
}
_putchar('\n');
}
