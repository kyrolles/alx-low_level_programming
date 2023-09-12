#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch = 'a';
while (ch <= 'j')
{
putchar(ch - 49);
ch++;
}
putchar('\n');
return (0);
}
