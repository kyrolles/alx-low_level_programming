#include"main.h"

/**
 * print_square - prints a square,
 * followed by a new line.
 * @size:  is the size of the square
 *
 * Return: nothing.
 */

void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < i; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
