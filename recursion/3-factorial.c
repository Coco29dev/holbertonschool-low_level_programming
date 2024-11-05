#include <stdio.h>
#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 *
 * Description: This function calculates the factorial of the number `n`
 * recursively. If `n` is less than 0, it returns -1 to indicate an error
 * as factorial is not defined for negative numbers. The factorial of 0 is
 * defined as 1.
 *
 * Return: The factorial of `n` if `n >= 0`, otherwise -1 if `n < 0`.
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
