#include <stdio.h>

/**
 * print_to_98 - Prints numbers inputed from 98, in order with space and comma
 * @n: start the counting from here
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
				printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

