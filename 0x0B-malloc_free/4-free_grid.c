#include <stdlib.h>
#include "main.h"
/**
* free_grid - function that frees a 2d grid
* @grid: int argument for rows
* @height: int argument for columns
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
