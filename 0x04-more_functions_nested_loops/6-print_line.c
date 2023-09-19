#include"main.h"

/**
 * print_line - draws a straight line in the terminal,
 * followed by a new line.
 * @n: he number of times the character _ should be printed
 *
 * Return: nothing.
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n--)
{
_putchar('_');
}
_putchar('\n');
}
}
