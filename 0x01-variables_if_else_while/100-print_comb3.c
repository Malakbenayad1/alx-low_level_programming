#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print'
 * Return: always 0
 */
int maim(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; ones++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
