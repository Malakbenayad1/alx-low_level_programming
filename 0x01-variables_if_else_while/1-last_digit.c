#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Prints the last digit of a randomly generated numbre
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: always 0.
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((m % 10) > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n",
				n, m % 10);
	}
	else if ((m % 10) < 6 && (m % 10) != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n",
				n, m% 10);
	}
	else
	{
		printf("last digit 0f %d is %d and is 0\n",
				n, m % 10);
	}

	return (0);
}