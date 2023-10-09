#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: array of elements.
 * @size: the size of each blokc in the array.
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
	ptr =(int *) malloc(sizeof(int) * t);

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
