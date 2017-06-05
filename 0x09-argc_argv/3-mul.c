#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers, prints new line after printing results
 * @argc: number of arguments
 * @argv: array of strings
 * Return: success is 0.
 */
int main(int argc, char *argv[])
{
	char *n1;
	char *n2;
	int i, j, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = argv[1];
	n2 = argv[2];
	i = atoi(n1);
	j = atoi(n2);
	mult = i * j;

	printf("%d\n", mult);

	return (0);
}
