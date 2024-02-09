#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: pointer of value
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, y, w;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		y = 0;
	else
	{
		for (y = 0; s2[y]; y++)
			;
	}
	if (y > n)
		y = n;
	s = malloc(sizeof(char) * (i + y + 1));
	if (s == NULL)
		return (NULL);
	for (w = 0; w < i; w++)
		s[w] = s1[w];
	for (w = 0; w < y; w++)
		s[w + i] = s2[w];
	s[i + y] = '\0';
	return (s);
}
