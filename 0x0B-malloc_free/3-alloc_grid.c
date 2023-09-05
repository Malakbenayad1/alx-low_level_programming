#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - function that returns a pointer to a 2
 * @width: rows of matrix
 * @height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i;
	int j;
	int t;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(matrix + 1) = (int *)malloc(width * sizeof(int));
		if (*(matrix + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = matrix[i];
				free(p);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (t = 0; t < height; t++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[t][j] = 0;
		}
	}
	return (matrix);
}
