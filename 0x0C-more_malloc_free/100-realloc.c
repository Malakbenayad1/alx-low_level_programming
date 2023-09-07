#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously
 * @old_size: size
 * @new_size: new siz
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *d;
	unsigned int i, max = new_size;
	char *s = ptr;

	if (ptr == NULL)
	{
		d = malloc(new_size);
		return (d);
	}
	else if (new_size == old_size)
		return (ptr);
	d = malloc(new_size);
	if (d == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		d[i] = s[i];
	free(ptr);
	return (d);
}
