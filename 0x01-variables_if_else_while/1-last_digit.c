#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always return 0 (success)
 */
int main(void)
{
	int n;
	int lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnum = n % 10;
	if (lastnum > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastnum);
	}
	if (lastnum == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastnum);
	}
	if (lastnum < 6 && lastnum != 0)
	{
		printf("last digit of %d is %d and less than 6 and not 0\n", n, lastnum);
	}
	return (0);
}
