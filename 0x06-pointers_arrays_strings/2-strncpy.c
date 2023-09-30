#include "main.h"

/**
 * *_strncpy - to add to string to each other with n int.
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
countd = 0;
while (n-- && (src[i] != '\0'))
{
dest[countd] = src[i];
i++;
countd++;
}
return (dest);
}
