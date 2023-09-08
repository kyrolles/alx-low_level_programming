#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types
 *
 * Return: always 0 success
 */
int main(void)
{
printf("Size of a char: %lu ", sizeof(char));
printf("Size of an int: %lu ", sizeof(int));
printf("Size of a long int: %lu ", sizeof(long int));
printf("Size of a long long: %lu ", sizeof(long long));
printf("Size of a float: %lu ", sizeof(float));
return (0);
}
