#include "main.h"
/**
 * *string_toupper - function that changes all
 * lowercase letters of a string to uppercase.
 * @str: an array of char.
 *
 * Return: the array uppercase (str).
 */

char *string_toupper(char *str)
{
int count, i;

for (count = 0; *(str + count) != '\0'; count++)
{
}
for (i = 0; i < count; i++)
{
str[i] = (*str - ' ');
str++;
i++;
}
return (str);
}
