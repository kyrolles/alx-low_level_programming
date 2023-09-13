#include "main.h"
/**
* main - Entry point
 *
 * Description: A C  program will assign a random number to the variable n each
 * time it is executed order to print whether the number stored in the variable
 * n is positive or negative.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

for (int i = 0; i < 8; i++)
{
putchar(ch[i]);
}
putchar('\n');
return (0);
}
