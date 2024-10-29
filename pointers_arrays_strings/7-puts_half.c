#include <stdio.h>
#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: A pointer to the string to be printed.
 *
 * Description: This function takes a pointer to a string and
 * prints the second half of the string. If the length is odd,
 * it prints the last n characters where n = (length - 1) / 2.
 */

void puts_half(char *str)
{
int length = 0;
int start;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length / 2) + 1;
}
while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}
_putchar('\n');
}
