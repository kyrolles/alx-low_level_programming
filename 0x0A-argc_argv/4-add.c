#include <stdio.h>
#include <stdlib.h>
/**
 * main - Sum my digit after the second array.
 * @argc: Size of my Array of arrays
 * @argv: Position in my main array.
 * Return: Always is 0 if is succes.
 */
int main(int argc, char **argv)
{
	int i, sum;
char *c;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (c = argv[i]; *c; c++)
		{
			if (*c <= 47 || *c > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
			sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
