#include "main.h"
/**
 * *_memcpy - Write a function that copies memory area.
 * @dest: an array of char.
 * @src: arra
 * @n: num of int.
 *
 * Return: the array uppercase (str).
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
