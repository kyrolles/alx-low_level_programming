#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: array of elements.
 * @size: the size of each blokc in the array.
 *
 * Return: NULL if fails Or ptr if success.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
char *ptr_char;
unsigned int i, t;

if (nmemb == 0 || size == 0)
{return (NULL); }
t = nmemb * size;
	ptr = malloc(t);

	if (ptr == NULL)
	{
		return (NULL);
	}
ptr_char = (char *)ptr;
	for (i = 0; i < t; i++)
	{
		ptr_char[i] = 0;
	}

	return (ptr);
}
