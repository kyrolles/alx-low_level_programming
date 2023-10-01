#include "main.h"
/**
 * *cap_string - function that changes all
 * lowercase letters of a string to uppercase.
 * @str: an array of char.
 *
 * Return: the array uppercase (str).
 */

char *cap_string(char *str)
{
int count, i;

/* Capitalize the first character if it's a lowercase letter */
if (str[0] >= 'a' && str[0] <= 'z')
{
str[0] -= 32;
}
for (count = 0; str[count] != '\0'; count++)
{
if (str[count] == '\n' || str[count] == ' ' || str[count] == ',' || str[count] == ';' || str[count] == '.' || str[count] == '!' || str[count] == '?' || str[count] == '"' || str[count] == '(' || str[count] == ')' || str[count] == '{' || str[count] == '}' || str[count] == '\t')
{
if (str[count + 1] >= 'a' && str[count + 1] <= 'z')
{
str[count + 1] -= 32;
}
}
}
return (str);
}
