#include"main.h"

/**
  * puts2 -  prints a string, followed by a new line, to stdout
  * @str: the string.
  *
  */

void puts2(char *str)
{
while (*str != '\0')
{
if (*str%2 == 0) {
_putchar(*str);
}
str++;
}
_putchar('\n');
}
