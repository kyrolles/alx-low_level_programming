#include"main.h"
/**
 * print_alphabet - wirte the the lower-case alphabet on a line.
 *
 *
 *
 */
void print_alphabet(void)
{
int c;
int i;

for (i = 0 ; i < 10 ; i++)
{
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
