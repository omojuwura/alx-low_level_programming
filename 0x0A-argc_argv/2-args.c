#include <stdio.h>

/**
 * main - this prints all arguments it recieves
 * @argc: this is the number of arguments passed to the function
 * @argv: this is the argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
