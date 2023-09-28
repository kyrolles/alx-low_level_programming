#include"main.h"

/**
  * print_rev -  prints a string, followed by a new line, to stdout
  * @str : pointer.
  *
  */

void print_rev(char *str)
{
str = &str[-1];
while (*str != '\0')
{
_putchar(*str);
str--;
}
_putchar('\n');
}
