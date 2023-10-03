#include "main.h"
/**
 * print_diagsums - function that prints the sum
 * of the two diagonals of a square matrix of integers.
 * @a: 2D array.
 * @size: the size of the 2D array row and column
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i];
sum2 += a[size - i - 1];
a += size;
}

printf("%d, %d\n", sum1, sum2);
}
