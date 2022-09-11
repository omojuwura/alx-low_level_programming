#include <stdio.h>
/**
 *  main - entry point
 *
 *  codes for printing numbers from 0-9 with commas and space between them
 *  this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 *  Return: 0
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit < 100; digit1++)
	{
		for (digit2 = 0; digit2 < 100; digit2++)
		{
			if (digit2 > digit1)
			{
				putchar((digit1 / 10) + '0');
				putchar((digit1 % 10) + '0');
				putchar(' ');
				putchar((digit2 / 10) + '0');
				putchar((digit2 % 10) + '0');

				if (digit1 != 98)
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
