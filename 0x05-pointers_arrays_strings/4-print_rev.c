#include"main.h"

/**
  * print_rev -  prints a string, followed by a new line, to stdout
  * @s : pointer.
  *
  */

void print_rev(char *s)
{
int end = 0;

while (*(s + end) != '\0')
{
end++;
}
while (end--)
{
_putchar(s[end]);
}
_putchar('\n');
}
