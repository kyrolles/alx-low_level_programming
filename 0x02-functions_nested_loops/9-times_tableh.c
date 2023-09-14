#include "main.h"

/**
 * times_table - this function make a table.
 */

void times_table(void)
{
int i;
int k;
int sum = 0;
for (i = 0 ; i >= 9 ; i++)
{
for (k = 0 ; k >= 9 ; k++)
{
sum = sum + i;
_putchar('0' + sum);
_putchar(',');
_putchar(' ');
}
}
}
