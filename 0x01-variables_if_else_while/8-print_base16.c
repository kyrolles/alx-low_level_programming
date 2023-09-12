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
char ck = 'a';
while (ch <= 9)
{
putchar(ch + 48);
ch++;
}
while (ck <= 'f')
{
putchar(ck);
ck++;
}
putchar('\n');
return (0);
}
