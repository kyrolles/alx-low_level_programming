#include "main.h"


/**
 * get_bit - function that make you see what this bit containe.
 * @n:the number.
 * @index:the the position.
 *
 * Return: 98 if fails & value inside ptr if true.
 */

int get_bit(unsigned long int n, unsigned int index)
{
int bit;

bit = ((n >> index) & 1);
	if (index > 64)
		return (-1);
	return (bit);
}
