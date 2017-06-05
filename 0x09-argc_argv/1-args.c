#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: arguments
 * Return: success is 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int num_args;

	num_args = argc - 1;

	printf("%d\n", num_args);
	return (0);
}
