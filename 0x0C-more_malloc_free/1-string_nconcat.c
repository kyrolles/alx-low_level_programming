#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - function that allocates memory using malloc.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the numeber that you should return of every s1 or s2.
 *
 * Return: NULL if fails Or ptr if success.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1, size2;
char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (size1 = 0; s1[size1] != '\0'; size1++)
{}
	for (size2 = 0; s2[size2] != '\0' && size2 < n; size2++)
{}
	ptr = malloc(size1 + size2 + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	unsigned int i;

	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		ptr[size1 + i] = s2[i];
	}
	ptr[size1 + size2] = '\0';

	return (ptr);
}
