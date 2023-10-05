#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid -  function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the width of the array.
 * @height: the height of the array.
 * Return: ptr or  Nothing.
 */
int **alloc_grid(int width, int height)
{
int **ptr;
int r, c, i;

if (width <= 0 || height <= 0)
{
return (NULL);
}
ptr = (int **) malloc(sizeof(int) * height);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
ptr[i] = (int *)malloc(sizeof(int) * width);
if (ptr[i] == NULL)
{
free(ptr);
return (NULL);
}
}
for (r = 0; r < height; r++)
{
for (c = 0; c < width; c++)
{
ptr[r][c] = 0;
}
}
return (ptr);
}
