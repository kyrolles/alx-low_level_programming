#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of application. Returns the number of coins
 *
 * program that prints the minimum number of
 * coins to make change for an amount of money.
 *
 * in 25, 10, 5, 2 and 1 needed to make the change of an amount of money.
 * @argc: Number of arguments to the main function
 * @argv: Array with the arguments to the main function
 *
 * Return: 0 if can make the change (Success).
 * 1 if does have more than 1 parameter.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	if (money >= 0)
	{
		sum += money / 25;
		money %= 25;
		sum += money / 10;
		money %= 10;
		sum += money / 5;
		money %= 5;
		sum += money / 2;
		money %= 2;
		sum += money;
	}
	printf("%d\n", sum);
	return (0);
}
