#include"main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal,
 * followed by a new line.
 * @n: he number of times the character ' ' should be printed
 *
 * Return: nothing.
 */

void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
