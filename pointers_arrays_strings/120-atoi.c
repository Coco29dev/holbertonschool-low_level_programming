#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: A pointer to the string to be converted.
 *
 * Description: This function takes a string and converts it to an
 * integer, handling leading whitespace and '+'/'-' signs.
 * If there are no numbers in the string, the function returns 0.
 *
 * Return: The converted integer value.
 */

int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
while (*s == ' ')
{
s++;
}
while (*s == '-' || *s == '+')
{
if (*s == '-') {
sign *= -1;
}
s++;
}
while (*s >= '0' && *s <= '9')
{
if (num > (2147483647U - (*s - '0')) / 10)
{
return (sign == 1 ? -1 : 0);
}
num = num * 10 + (*s - '0');
s++;
}
return (sign * num);
}
