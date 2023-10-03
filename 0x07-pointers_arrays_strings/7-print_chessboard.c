#include "main.h"
/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: an array of char that has the chessboard.
 *
 * Return: Nothing.
 */

void print_chessboard(char (*a)[8])
{
int row, column;

for (column = 0; column < 8; column++)
{
for (row = 0; row < 8; row++)
{
_putchar(a[column][row]);
}
}
}
