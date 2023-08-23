#include "main.h"
/**
 * *string_toupper - function that changes all lowercase letters of a string to uppercase.
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *)
{
	int j;

	j = 0;
	while (n[j] != '\0')
	{
		if (n[j] <= "a" && n[j] <= "b")
			n[j] = n[j] -32;
		j++;
	}
}
