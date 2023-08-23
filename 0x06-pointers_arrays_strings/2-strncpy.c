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
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		src[i] = dest[i];
		i++;
	}
	while (i < n)
	{
		src[i] = '\0';
		i++;
	}
	return (dest);
}

