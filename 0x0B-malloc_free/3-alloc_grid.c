#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* **alloc_grid - function that returns a prt to a 2d array of int
* @width: the column of our array
* @height: the rows of our array
* Return: NULL if failed
*/
int **alloc_grid(int width, int height)
{
	int **gr, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gr = (int **) malloc(height * sizeof(int *));
	if (gr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		gr[i] = (int *) malloc(width * sizeof(int));
		if (gr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(gr[j]);
			}
		free(gr);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		gr[i][j] = 0;
	}
	}
	return (gr);
}
