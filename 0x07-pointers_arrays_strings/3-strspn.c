#include "main.h"
/**
 * *_strchr - Write a function that copies memory area.
 * @s: an array of char.
 * @c: the ASCII.
 *
 * Return: the array (s) or (NULL)
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int j;
unsigned int count = 0;

for (i = 0; s[i] >= '\0'; i++)
{
for (j = 0; accept[j] >= '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}
}
return (count);
}
