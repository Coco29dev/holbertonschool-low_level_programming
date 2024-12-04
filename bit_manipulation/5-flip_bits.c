#include "main.h"

/**
 * flip_bits - returns the number of bits you need to flip
 * @n: first integrer
 * @m: second integrer
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flip = n ^ m;
unsigned long int count = 0;
while (flip)
{
count += flip & 1;
flip >>= 1;
}
return (count);
}
