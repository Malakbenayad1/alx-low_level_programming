#include "main.h"

/**
 * print_name - function that prints a name
 * @name: input
 * @f: input
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
