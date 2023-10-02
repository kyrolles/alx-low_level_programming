#include "main.h"
/**
 * *_strchr - Write a function that copies memory area.
 * @s: an array of char.
 * @c: the ASCII.
 *
 * Return: the array (s) or (NULL)
 */

char *_strchr(char *s, char c)
{
unsigned int i;

for (i = 0; *s != '\0'; i++)
{
if (s[i] == c)
{
return (s);
}
}
return (NULL);
}
