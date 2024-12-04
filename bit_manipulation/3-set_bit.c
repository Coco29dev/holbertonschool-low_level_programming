#include "main.h"

/**
 * set_bit - returns the value of a bit given index
 * @n: pointer integrer
 * @index: index
 * Return: value of bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
int mask = 0;
if (index > 63)
return (-1);
mask = 1 << index;
n = n | mask;
return (1);
}
