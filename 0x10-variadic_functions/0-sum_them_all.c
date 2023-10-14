#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: size of args.
 *
 * Return: the sum of args.
 */
int sum_them_all(const unsigned int n, ...)
{
int i, sum = 0;

if (n == 0)
{return (0); }

va_list arg;

va_start(arg, n);

for (i = 1; i < n; i++)
{
sum += va_arg(arg, int);
}
va_end(arg);
return (sum);
}
