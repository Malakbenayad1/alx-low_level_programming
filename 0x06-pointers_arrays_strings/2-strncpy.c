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
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		src[j] = dest[i];
		j++;
		i++;
	}
	while (j < n)
	{
		src[j] = '\0';
		j++;
	}
	return (dest);
}

