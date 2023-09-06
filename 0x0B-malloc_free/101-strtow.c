#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - concatenates all the arguments of your program
 *@str: string
 *@av: arguments
 * Return: a pointer to a new string
 */
char **strtow(char *str)
{
	int i, w, j, s, count, m, wordf;
	char **p;
	char *x;

	w = 0;
	j = 0;
	i = 0;
	count = 0;
	if (*str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ' && (str[j + 1] != ' ' || str[j + 1] == '\0'))
			w++;
	}
	p = (char **)malloc((w + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	for (wordf = 0; str[wordf] && i <= w; wordf++)
	{
		count = 0;
		if (str[wordf] != ' ')
		{
			for (j = wordf ; str[j] != '\0'; j++)
			{
				if (str[j] == ' ')
					break;
				count++;
			}
			*(p + i) = (char *)malloc((count + 1) * sizeof(char));
			if (*(p + i) == NULL)
			{
				for (s = 0; s <= i; s++)
				{
					x = p[s];
					free(x);
				}
				free(p);
				return (NULL);
			}
			for (m = 0; wordf < j; wordf++)
			{
				p[i][m] = str[wordf];
				m++;
			}
			p[i][m] = '\0';
			i++;
		}
	}
	p[i] = NULL;
	return (p);
}
