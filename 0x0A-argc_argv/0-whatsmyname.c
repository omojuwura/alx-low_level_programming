#include <stdio.h>

/**
 * main - This prints the name of the program.
 * @argc: This is the number of arguments passed to the function
 * @argv: This is the argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
