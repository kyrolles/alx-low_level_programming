#include"main.h"

/**
 * islower - the main fuction
 *
 * @c : the comming symbole
 *
 * */

int _islower(int c)
{
if ( c >= 97 && c <= 122 )
{
return 1;
}
else
{
return 0;
}
}
