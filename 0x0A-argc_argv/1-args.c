#include <stdio.h>

/**
 * main - this prints the name number of arguments passed to it
 * @argc: this is the number of arguments passed to the function
 * @argv: this is the argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
