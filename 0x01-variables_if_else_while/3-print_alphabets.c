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
char ch = 'a';
char ck = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (ck <= 'Z')
{
putchar(ck);
ck++;
}
putchar('\n');
return (0);
}
