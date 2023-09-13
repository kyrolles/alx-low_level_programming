#include"main.h"

/**
 * print_sign - the main fuction
 *
 * @n : the comming symbole
 *
 * Return: 0 it will return not _islower
 * or 1  it will return _islower (sucess)
 *
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
