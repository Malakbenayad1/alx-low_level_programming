#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer should point to a newly allocated space in memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *strnew = NULL;
	unsigned int j;
	int m1;
	int m2;
	int count;

	count = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (m1 = 0; s1[m1] != '\0'; m1++)
		;
	for (m2 = 0; s2[m2] != '\0'; m2++)
		;
	strnew = (char *)malloc((m1 + m2 + 1) * sizeof(char));
	if (strnew == NULL)
	{
		return (NULL);
	}
	for (j = 0; s1[j] != '\0'; j++)
		strnew[j] = s1[j];
	for (; s2[count] != '\0'; j++)
	{
		strnew[j] = s2[count];
		count++;
	}
	return (strnew);
}
