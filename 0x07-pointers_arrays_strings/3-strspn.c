#include "main.h"
/**
 * _strspn - Write a function that copies memory area.
 * @s: an array of char.
 * @accept: the second array.
 *
 * Return: the array (i) the length.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}

		/* If no match found in accept string, break the outer loop */
		if (accept[j] == '\0')
		{
			return (i);
		}
	}

	return (i);
}
