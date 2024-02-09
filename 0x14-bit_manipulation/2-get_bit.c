#include "main.h"
/**
 * git_bit - returns the value of a bit at a given index
 * index: the index
 * @n: unsigned long int to search
 * Return: the value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 52)
		return (-1);
	return ((n >> index) & 1);
}
