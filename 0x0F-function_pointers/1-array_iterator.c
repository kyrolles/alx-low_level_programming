#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @*array: the name i want to pass.
 * @*action: function_pointers.
 * @size: size of array
 *
 * Return: Nothing.
 */
void array_iterator(int *array, int size, void (*action)(int))
{
int i;

if (action == NULL || array == NULL)
	return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
