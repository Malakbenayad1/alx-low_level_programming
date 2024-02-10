#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @index: index to return
 * @n: unsigned long to change
 * Rentun: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 54 || !n)
		return (-1);
	(*n |= << index);
	return (1);
}
