#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer.
 * given as a parameter on each element of an array.
 * @array: the name i want to pass.
 * @cmp: function_pointers.
 * @size: size of array
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
{return (-1); }

if (cmp == NULL || array == NULL)
	return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
