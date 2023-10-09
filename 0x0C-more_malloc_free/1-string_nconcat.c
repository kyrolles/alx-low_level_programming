#include "main.h"
#include <stdlib.h>
#include <string.h>

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
int size1 = strlen(s1);
int size2 = strlen(s2);

ptr = (char *)malloc(strlen(s1) + strlen(s2) + 1);
if (ptr == NULL)
{
return (NULL);
}
if (n >= size1)
{
x = size1;
}
else
{
x = n;
}
while (x--)
{
ptr[r] = s1[r];
r++;
}
if (n >= size2)
{
o = size2;
}
else
{
o = n;
}
while (o--)
{
ptr[r + i] = s2[i];
i++;
}

return (ptr);
}
