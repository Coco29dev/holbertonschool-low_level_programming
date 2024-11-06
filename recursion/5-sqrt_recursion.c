#include <stdio.h>
#include "main.h"

int _sqrt_recursion_helper(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 * Return: The natural square root of n if it exists, otherwise -1.
 *         If n is negative, returns -1.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_recursion_helper(n, 0));
}
/**
 * _sqrt_recursion_helper - Helper function to
 * recursively find the natural square root.
 * @n: The number to find the square root of.
 * @i: The current value to test if i * i is equal to n.
 * Return: The natural square root of n if it exists, otherwise -1.
 */
int _sqrt_recursion_helper(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (_sqrt_recursion_helper(n, i + 1));
}
