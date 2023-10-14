#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Write a function that returns the sum of all its parameters.
 * @n: is the number of integers passed to the function.
 * @separator: is the string to be printed between numbers.
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i, x = 0;



va_start(arg, n);

for (i = 0; i < n; i++)
{
x = va_arg(arg, unsigned int);
printf("%d", x);

if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(arg);
}
