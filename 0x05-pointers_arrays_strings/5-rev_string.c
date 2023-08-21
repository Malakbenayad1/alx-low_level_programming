#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, len1;

	len = 1;
	len1 = 1;

	while (s[len] != '\n')
	{
		len++;
	}

	len1 = len1 -1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
