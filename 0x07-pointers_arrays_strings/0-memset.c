#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @n: function fills the first
 * @s: bytes of the memory area pointed
 * @b: the constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*( S + i) = b;
		i++;
	}
	return (s);
}
