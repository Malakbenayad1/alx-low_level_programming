#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -  function that frees
 * @grid: rows of matrix
 * @height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
void free_grid(int **grid, int height)
{
	int j;
	int *p;

	for (j = 0; j < height; j++)
	{
		p = grid[j];
		free(p);
	}
	free(grid);
}
