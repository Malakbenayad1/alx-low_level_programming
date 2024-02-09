#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: input
 * @size: input
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *d;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	d = malloc(nmemb * size);
	if (d == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		d[i] = 0;
	return (d);
}
