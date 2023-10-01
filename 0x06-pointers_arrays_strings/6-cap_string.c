#include "main.h"

/**
* is_sep - check if a char is a seperator.
* @k: the char to test.
*
* Return: 1 if seperator is found else 0
*/
int is_sep(char k)
{
	char sep[] = {'\t', '\n', ' ', ',', ';', '!',
		      '.', '?', '\"', '(', ')', '{', '}'};
	int i = 0;

	while (sep[i] != '\0')
	{
		if (k == sep[i])
			return (1);
		i++;
	}
	return (0);
}

/**
* cap_string - This function capitalizes all words of a string.
* @str: sring to be processed.
*
* Return: pointer to the modified string.
*/
char *cap_string(char *str)
{
	int sep, i;

	sep = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (sep == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			sep = 0;
		}
		sep = is_sep(str[i]);
		i++;
}
	return (str);
}
