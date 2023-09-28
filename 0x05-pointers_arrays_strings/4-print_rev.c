#include"main.h"

/**
  * print_rev -  prints a string, followed by a new line, to stdout
  * @s: the string.
  *
  */

void print_rev(char *s)
{
char *ptr_s = &s[-1];
while (*ptr_s != '\0')
{
_putchar(*ptr_s);
ptr_s--;
}
_putchar('\n');
}
