#include "3-calc.h"
/**
 * op_add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The difference of a and b
 */
int op_sub (int a, int b)
{
return (a - b);
}
/**
 * op_mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Divides two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of dividing a by b
 *         If b is 0, print error and exit
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - Calculates the remainder of division
 * @a: The first integer
 * @b: The second integer
 * Return: The remainder of a divided by b
 *         If b is 0, print error and exit
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
