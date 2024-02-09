#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: input
 * @max: input
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *d;
	int i, j;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	d = malloc(sizeof(int) * j);
	if (d == NULL)
		return (NULL);
	for (i = 0; i < j; i++, min++)
	{
		d[i] = min;
	}
	return (d);
}
