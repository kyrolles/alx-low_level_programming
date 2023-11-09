#include "main.h"
#include <math.h>

/**
 * binary_to_uint - function that convert binary_to_unsigned int;
 * @b:the array.
 *
 * Return: 98 if fails & value inside ptr if true.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, len = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		len++;
	}

	for (i = 0; i < len; i++)
	{
		/**
		* if (b[len - 1 - i] == '1')
		*{num += pow(2, i);	}
		*/
		if (b[i] == '1')
		{
		num = num << 1;
		num = num + 1;
		}
		else
		{
		num = num << 1;
		}
	}

	return (num);
}

