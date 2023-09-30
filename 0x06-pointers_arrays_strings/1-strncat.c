#include "main.h"

/**
 * *_strncat - to add to string to each other with n int.
 * @dest: first string.
 * @src: second string.
 * @n: the num i want to add.
 *
 * Return: first string (dest).
 */

char *_strncat(char *dest, char *src, int n)
{
int countd, counts;
int i = 0;

for (countd = 0; *(dest + countd) != '\0'; countd++)
{
}
for (counts = 0; *(dest + counts) != '\0'; counts++)
{
}
while (n-- && (src[i] != '\0'))
{
dest[countd] = src[i];
i++;
countd++;
}
return (dest);
}
