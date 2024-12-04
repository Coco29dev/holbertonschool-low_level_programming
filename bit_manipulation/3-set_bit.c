#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer integrer
 * @index: index
 * Return: value of bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 0;
if (index > 63)
return (-1);
mask = 1 << index;
*n = *n | mask;
return (1);
}
