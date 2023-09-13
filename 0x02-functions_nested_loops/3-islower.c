#include"main.h"

/**
 * _islower - the main fuction
 *
 * @c : the comming symbole
 *
 * Return: 0 it will return not _islower
 * or 1  it will return _islower (sucess)
 *
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
