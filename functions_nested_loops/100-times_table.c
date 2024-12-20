#include <stdio.h>
#include "main.h"


/**
 * print_times_table - Prints the n times table, starting from 0.
 * @n: The number for which to print the times table.
 *
 * Description: This function prints the times table for the
 * specified number n, from 0 to n. If n is less than 0 or greater
 * than 15, the function does not print anything.
 */

void print_times_table(int n)
{
    int i, j, product;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            product = i * j;

            if (j > 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (product < 10)
                _putchar(product + '0');
            else if (product < 100)
            {
                _putchar(product / 10 + '0');
                _putchar(product % 10 + '0');
            }
            else
            {
                _putchar(product / 100 + '0');
                _putchar((product / 10) % 10 + '0');
                _putchar(product % 10 + '0');
            }
        }
        _putchar('\n');
    }
}
