#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: the size. 
 *
 */
void *malloc_checked(unsigned int b)
{
void * ptr;
int *ptr2;

ptr = (void *)malloc(b);
if (ptr == NULL)
{
ptr2[0] = 98;
return (ptr2);
}

return (ptr);
}
