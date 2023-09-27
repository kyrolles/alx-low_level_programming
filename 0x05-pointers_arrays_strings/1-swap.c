#include"main.h"

/**
 * swap_int- swaps the values of two integers.
 * @a: is pointer.
 * @b: is a pointer.
 *
 */

void swap_int(int *a, int *b)
{
int x = *a;

*a = *b;
*b = x;
}
