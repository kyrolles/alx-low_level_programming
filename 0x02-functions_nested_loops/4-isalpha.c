#include"main.h"

/**
 * _isalpha - the main fuction
 *
 * @c : the comming symbole
 *
 * Return: 0 it will return not _islower
 * or 1  it will return _islower (sucess)
 *
 */

int _isalpha(int c)
{
if (c >= 65 && c <= 90 ||  c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
