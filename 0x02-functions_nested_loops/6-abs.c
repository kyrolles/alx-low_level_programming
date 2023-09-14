#include"main.h"

/**
 * _abs - the main fuction
 *
 * @n : the comming symbole
 *
 * Return: 0 it will return not _islower
 * or 1  it will return _islower (sucess)
 *
 */

int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n == 0)
{
return (0);
}
else
{
return (n * -1);
}
}
