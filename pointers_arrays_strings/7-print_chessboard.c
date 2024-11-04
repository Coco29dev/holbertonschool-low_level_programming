#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - Prints the chessboard.
 * @a: A pointer to an array of 8 arrays of 8 characters.
 *
 * This function prints the chessboard represented by the
 * 2D array passed to it.
 */
void print_chessboard(char (*a)[8])
{
int l;
int c;
for (l = 0; l < 8; l++)
{
for (c = 0; c < 8; c++)
{
_putchar(a[l][c]);
}
_putchar('\n');
}
}
