#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: A pointer to the string to be reversed.
 *
 * Description: This function takes a pointer to a string and
 * reverses the characters in the string in place, modifying
 * the original string. The function does not return a value.
 */

void rev_string(char *s)
{
int start = 0;
int end = 0;
while (s[end] != '\0')
{
end++;
}
end--;
while (start < end)
{
char temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
