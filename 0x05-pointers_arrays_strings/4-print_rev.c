#include"main.h"

/**
  * print_rev -  prints a string, followed by a new line, to stdout
  * @s: the string.
  *
  */

void print_rev(char *s)
{
s = &s[-1];
while (*s != '\0')
{
_putchar(*s);
s--;
}
_putchar('\n');
}
