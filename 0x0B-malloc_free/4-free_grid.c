#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 *functionfrees 2D grid
 *which were created by alloc_grind
 *compile alloc_grind.c
 */
void free_grid(int **grid, int height)

{
if (grid != NULL && height != 0)
{
for (; height >= 0; height--)
free(grid);
free(grid[height]);
}
}
