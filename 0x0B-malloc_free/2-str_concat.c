#include "main.h"
#include <stdlib.h>

/**
 * *str_concat -  Write a function that concatenates two strings.
 * @s1: the pointer that are in stack static memory.
 * @s2: the pointer that are in stack static memory.
 * Return: ptr or  Nothing.
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
unsigned int i, k;
unsigned int size1, size2, size;

if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
if (s1 != NULL)
{
for (size1 = 0; s1[size1] != '\0'; size1++)
{
}
}
if (s2 != NULL)
{
for (size2 = 0; s2[size2] != '\0'; size2++)
{
}
}
size = size1 + size2;
size += 1;
ptr = (char *) malloc(sizeof(char) * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size1; i++)
{
*(ptr + i) = *(s1 + i);
}
for (k = 0; k < size2;  k++)
{
*(ptr + k + size1) = *(s2 + k);
}
return (ptr);
}
