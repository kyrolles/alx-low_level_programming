#include "main.h"
#include <stdlib.h>
/**
 * *array_range -  function that creates an array of integers.
 * @min: input int.
 * @max: input int.
 *
 * Return: NULL if fails Or ptr if success.
 */
int *array_range(int min, int max)
{
int *ptr;
int i, t;

if (min > max)
{return (NULL); }
t = max - min + 1;
	ptr = (int *) malloc(sizeof(int) * t);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
