#include "main.h"
/**
 * reverse_array - unction that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int countd;
int count = 0;
int arr[n];

for (countd = 0; countd < n; countd++) {
arr[countd] = a[countd];
}
for (countd = n - 1; countd >= 0; countd--) {
a[countd] = arr[count];
count++;
}
}
