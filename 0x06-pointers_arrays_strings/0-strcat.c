#include "main.h"

/**
 * *_strcat - to add to string to each other.
 * @dest: first string.
 * @src: second string.
 *
 * Return: first string (dest).
 */

char *_strcat(char *dest, char *src)
{
int countd, counts;
int i = 0;

for (countd = 0; *(dest + countd) != '\0'; countd++)
{
}
for (counts = 0; *(dest + counts) != '\0'; counts++)
{
}
while (i <= counts)
{
dest[countd] = src[i];
i++;
countd++;
}
return (dest);
}
