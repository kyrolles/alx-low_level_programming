#include"main.h"

/**
  * print_rev -  prints a string, followed by a new line, to stdout
  * @s : pointer.
  *
  */

void print_rev(char *s)
{
int count = 0;

for (; *s != '\0'; s++)
{
count++;
}
s = s + count;
while (*s != '\0')
{
_putchar(*s);
s--;
}
_putchar('\n');
}
