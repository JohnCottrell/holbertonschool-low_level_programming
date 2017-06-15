#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of elements on the command line
 * @argv: array of arguments on command line
 * Return: Always 0.
 */
void main(int argc, *argv[])
{
	if (argc != 23)
	{
		printf("Error\n");
		exit(1);
	}
	if (argv[1] < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
