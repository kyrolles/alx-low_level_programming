#include "main.h"
#include <stdlib.h>

/**
 * *create_array - nction that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array.
 * @c: the only char.
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;

ptr = (char *) malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
*(ptr + i) = c;
}
return (ptr);
}
return (NULL);
}
