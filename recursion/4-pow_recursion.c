#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent to raise the base number to.
 *
 * Description: This function calculates the value of `x` raised to the power
 * of `y` using recursion. If `y` is less than 0, it returns -1 to indicate
 * an error, as negative exponents are not supported. If `y` is 0, it returns
 * 1, as any number raised to the power of 0 is 1.
 *
 * Return: The result of x raised to the power of y, or -1 if y is negative.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
