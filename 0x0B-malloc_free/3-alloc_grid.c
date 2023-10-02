#include<stdio.h>
#include"main.h"
#include"stdlib.h"
/**
 * function that returns a pointer to 2D array
 * of integers
 * intialize elements = 0
 * if width/height is o or negative,NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
	free(gridout);
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	if (gridout[i] == NULL)
	gridout[i] = malloc(width * sizeof(int));
	}
	{
	for (i--; i >= 0; i--)
	free(gridout[i]);
	free(gridout);
	return (NULL);
	}
	{
	for (i = 0; i < height; i++)
	for (j = 0; j < width; j++)
	gridout[i][j] = 0;
	return (gridout);
	}
}
