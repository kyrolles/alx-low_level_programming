#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - function that allocates memory using malloc.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the numeber that you should return of every s1 or s2.
 *
 * Return: NULL if fails Or ptr if success.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
int i = 0, x, r = 0, o;
int size1;
int size2;

if (s1 == NULL)
{s1 = ""; }
if (s2 == NULL)
{s2 = ""; }
for (size1 = 0; s1[size1] != '\0'; size1++)
{}
for (size2 = 0; s1[size2] != '\0'; size2++)
{}
ptr = (char *)malloc(size1 + size2 + 1);
if (ptr == NULL)
{
return (NULL); }
if (n >= size1)
{x = size1; }
else
{x = n; }
while (x--)
{
ptr[r] = s1[r];
r++;
}
if (n >= size2)
{o = size2 + 1; }
else
{o = n; }
while (o--)
{
ptr[r + i] = s2[i];
i++;
}
return (ptr);
}
