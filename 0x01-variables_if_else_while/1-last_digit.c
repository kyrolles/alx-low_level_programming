#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: A C  program will assign a random number to the variable n each
 * time it is executed order to The output of the program should be:
 * The string Last digit of, followed by
 * n, followed by
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int k;
srand(time(0));
n = rand() - RAND_MAX / 2;
k = n % 10;
if (k > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, k);
}
else if (k < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
}
else if (k == 0)
{
printf("Last digit of %d is %d and is 0\n", n, k);
}
return (0);
}
