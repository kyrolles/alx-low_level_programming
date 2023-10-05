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

ptr = (char *) malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}
else
{
*ptr = c;
return (ptr);
}
}
