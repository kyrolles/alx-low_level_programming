#include"main.h"

/**
 * print_triangle - prints a triangle,
 * followed by a new line.
 * @size:  is the size of the triangle.
 *
 * Return: nothing.
 */

void print_triangle(int size)
{
int i, j, margin, s;
s = size -1;

if (size <= 0)
{
_putchar('\n');
return;
}
else
{
for (i = 0; i < size; i++)
{
for (margin = 0; margin < (s - i); margin++)
{
putchar(32);
for (j = 0; j < i; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
}
