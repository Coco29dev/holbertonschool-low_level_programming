#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid.
 * @grid: A pointer to the 2D array.
 * @height: The number of rows in the grid.
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
