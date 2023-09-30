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

for (countd = 0; *(dest + countd) != '\0'; countd++)
{
}
for (counts = 0; *(dest + counts) != '\0'; counts++)
{
}
while (n--)
{
dest[countd] = src[i];
i++;
countd++;
}
return (dest);
}
