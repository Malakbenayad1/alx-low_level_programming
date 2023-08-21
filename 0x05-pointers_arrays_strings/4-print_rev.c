#include "main.h"
/**
 * print_rev - function that prints a string, in reverse, followed by a new line
 * @s: string
 */
void print_rev(char *s)
{
	int i, a, len;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (a = len - 1; a >= 0; a--)
	{
		putchar([a]);
	}
	putchar ('\n');
}
