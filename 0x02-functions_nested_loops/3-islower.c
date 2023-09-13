#include"main.h"

/**
 * _islower - the main fuction
 *
 * @c : the comming symbole
 *
 * return - 0 or 1 (sucess)
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
