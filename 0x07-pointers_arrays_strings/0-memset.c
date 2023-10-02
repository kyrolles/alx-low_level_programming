#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte.
 * @s: an array of char.
 * @b: char (ASCII)
 * @n: num of int.
 *
 * Return: the array uppercase (str).
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
