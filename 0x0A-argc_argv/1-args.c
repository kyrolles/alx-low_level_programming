#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: the number of argument in terminal.
 * @argv: it's about array of char that has arrgument in it.
 *
 * Return: 0.
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
int x;
x = argc - 1;
printf("%d\n", x);

return (0);
}
