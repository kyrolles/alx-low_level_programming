#include"main.h"

/**
  * print_rev -  prints a string, followed by a new line, to stdout
  * @s: the string.
  * @ptr_s : pointer.
  *
  */

void print_rev(char *str)
{
char *ptr_s = &str[-1];
while (*ptr_s != '\0')
{
_putchar(*ptr_s);
ptr_s--;
}
_putchar('\n');
}
