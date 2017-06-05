#include <stdio.h>

/**
 * main - prints all arguments recieved, one per line
 * @argc: number of arguments
 * @argv: array of strings
 * Return: success is 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		char *arg;

		arg = argv[i];
		printf("%s\n", arg);
	}

	return (0);
}
