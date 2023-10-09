#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: the number of argument in terminal.
 * @argv: it's about array of char that has arrgument in it.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
int num1, num2, mul;
if (argc == 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = (num1 *num2);
printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
