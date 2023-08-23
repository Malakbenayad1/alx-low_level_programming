#include "main.h"
/**
 * *_strncpy - function that copies a string.
 * @dest: destination
 * @src: source
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		src[j] = dest[j];
		j++;
	}
	while (j < n)
	{
		src[j] = '\0';
		j++;
	}
	return (dest);
}

