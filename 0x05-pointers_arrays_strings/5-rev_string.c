#include"main.h"

/**
  * rev_string -  prints a string, followed by a new line, to stdout
  * @s : pointer.
  *
  */

void rev_string(char *s)
{
int end = 0;

while (s[end])
{
end++;
}
while (end--)
{
_putchar(s[end]);
}
_putchar('\n');
}
