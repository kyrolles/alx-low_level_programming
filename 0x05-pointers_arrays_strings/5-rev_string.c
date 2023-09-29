#include"main.h"

/**
  * rev_string -  prints a string, followed by a new line, to stdout
  * @s : pointer.
  *
  */

void rev_string(char *s)
{
int end = 0;

while (*s != '\0')
{
_putchar(*s);
s++;
}
s = 0;
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
