#include"main.h"

/**
  * puts_half -  prints half of a string, followed by a new line.
  * @str: the string.
  *
  */

void puts_half(char *str)
{
int i = 0;
int count ,n;

while (str[i])
{
i++;
}
count = i;
if (i % 2 == 0)
{
n = i / 2;
while (count--)
{
_putchar(str[n]);
n++;
}
}
else if (i % 2 != 0)
{
n = (i - 1) / 2;
while (count--)
{
_putchar(str[n]);
n++;
}
}
_putchar('\n');
}
