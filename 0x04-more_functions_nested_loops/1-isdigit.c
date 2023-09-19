#include"main.h"

/**
 * _isupper - checks for a digit (0 through 9).
 * @c: is the character.
 *
 * Return: Returns 1 if c is bettween 0 and 9 
 * Returns 0 otherwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
