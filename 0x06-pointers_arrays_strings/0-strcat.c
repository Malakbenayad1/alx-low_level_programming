#include "main.h"
/**
 *_strcat - function that concatenates two strings.
 * @dest: destination
 * @src: source
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 2;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 2;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	 dest[i] = '\0';
}
