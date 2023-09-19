#include"main.h"

/**
 * print_diagonal - draws a straight line in the terminal,
 * followed by a new line.
 * @n: he number of times the character _ should be printed
 *
 * Return: nothing.
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n--)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
