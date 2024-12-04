#include "main.h"

/**
 * get_bit - returns the value of a bit given index
 * @n: integrer
 * @index: index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);
n = n >> index;
return (n & 1);
}
