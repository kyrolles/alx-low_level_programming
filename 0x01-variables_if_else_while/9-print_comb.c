#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: A.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int ch = 0;
while (ch <= 9)
{
putchar(ch + 48);
if (ch != 9)
{
putchar(',');
putchar(' ');
}
ch++;
}
putchar('\n');
return (0);
}
