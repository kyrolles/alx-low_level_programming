#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_strings - Write a function that prints strings,followed by a new line.
 * @n: is the number of integers passed to the function.
 * @separator: is the string to be printed between numbers.
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i;
char *s;



va_start(arg, n);

for (i = 0; i < n; i++)
{
s = va_arg(arg, char *);
if (separator != NULL)
{
printf("%s", s);
}
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
va_end(arg);
}
