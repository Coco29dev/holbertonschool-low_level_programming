#include <stdio.h>
#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: A pointer to the string whose length is to be calculated.
 *
 * Return: The length of the string, not including the null terminator.
 *
 * Description: This function iterates through the string pointed to by s,
 * counting the number of characters until it reaches the null terminator.
 */

int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}
