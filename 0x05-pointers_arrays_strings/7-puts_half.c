#include"main.h"

/**
  * puts_half -  prints half of a string, followed by a new line.
  * @str: the string.
  *
  */

void puts_half(char *str)
{
int i = 0;
int count, n;

while (str[i])
{
i++;
}
if (i % 2 == 0)
{
n = i / 2;
count = n;
while (count--)
{
_putchar(str[n]);
n++;
}
}
else if (i % 2 != 0)
{
n = (i - 1) / 2;
count = n;
while (count--)
{
n++;
_putchar(str[n]);
}
}
_putchar('\n');
}
