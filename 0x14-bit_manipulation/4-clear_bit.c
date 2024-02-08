#include "main.h"

/**
 * clear_bit - function that clear a bit at a given index.
 * @n: Pointer to the number.
 * @index: The position of the bit to clear.
 *
 * Return: -1 if an error occurred, otherwise 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

	if (index > 64)
		return (-1);

	mask = (1 << index);
	*n = *n & ~mask;

return (1);
}
