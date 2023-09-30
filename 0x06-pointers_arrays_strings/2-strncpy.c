#include "main.h"

/**
 * *_strncpy - to over write a string.
 * @dest: first string.
 * @src: second string.
 * @n: the num i want to add.
 *
 * Return: first string (dest).
 */

char *_strncpy(char *dest, char *src, int n)
{
int countd, counts;
int i = 0;

while (n-- && (src[i] != '\0'))
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
