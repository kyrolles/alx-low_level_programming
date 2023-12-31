#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: the pointer that are in stack static memory.
 *
 * Return: ptr or  Nothing.
 */
char *_strdup(char *str)
{
char *ptr;
unsigned int i;
unsigned int size;

if (str == NULL)
{
return (NULL);
}
for (size = 0; str[size] != '\0'; size++)
{
}
size += 1;
ptr = (char *) malloc(sizeof(char) * size);
if (ptr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
*(ptr + i) = *(str + i);
}
return (ptr);
}
free(ptr);
return (NULL);
}
