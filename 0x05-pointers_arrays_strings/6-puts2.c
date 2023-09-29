#include"main.h"

/**
  * puts2 -  prints a string, followed by a new line, to stdout
  * @str: the string.
  *
  */

void puts2(char *str)
{
int i = 0;
while(str[i]) 
{
if (i == 0)
{
_putchar(str[i]);
}
else if (i%2 == 0)
{
 _putchar(str[i]);  
}
i++;
}
_putchar('\n');
}
