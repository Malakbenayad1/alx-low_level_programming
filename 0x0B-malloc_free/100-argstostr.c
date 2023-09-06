#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: arguments
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	char *p = NULL;
	int s;
	int ext;
	
	s = 0;
	ext = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ext++;
		}
	}

	p = (char *)malloc(ext + ac + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[s] = av[i][j];
			s++;
		}
		p[s] = '\n';
		s++;
	}
	p[s] = '\0';
	return (p);
}
