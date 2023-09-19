#include"main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14 ten times,
 * followed by a new line.
 *
 * Return: nothing.
 */

void more_numbers(void)
{
char i;
int j, num = 0;

for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 14 ; i++)
{
num = i;
if (num > 9)
{
_putchar('1');
num = num % 10;
}
_putchar(num + '0');
}
_putchar('\n');
}
}
