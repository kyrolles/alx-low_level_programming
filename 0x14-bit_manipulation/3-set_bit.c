#include "main.h"

/**
 * set_bit - function that sets a bit at a given index.
 * @n: Pointer to the number.
 * @index: The position of the bit to set.
 *
 * Return: -1 if an error occurred, otherwise 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

	if (index > 64)
		return (-1);

	mask = (1 << index);
	*n = ((*n | mask) & 1);

return (1);
}
