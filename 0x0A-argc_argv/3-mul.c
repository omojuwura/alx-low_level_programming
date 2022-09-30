#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is a program that prints its name, followed by a new line
 * @argc: the argument that counts argument input
 * @argv: the argument that stores the strings in an array of char* (strings)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num_1, num_2, mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);
		mul = num_1 * num_2;
		printf("%d\n", mul);
	}
	return (0);
}
