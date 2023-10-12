#include "function_pointers.h"

/**
 * print_name - function that print the name,
 * @name: the name i want to pass.
 * @f: function_pointers.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
	return;

f(name);
}
