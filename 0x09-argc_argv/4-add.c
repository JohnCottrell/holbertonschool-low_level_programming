#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two numbers, prints new line after printing results
 * @argc: number of arguments
 * @argv: array of strings
 * Return: success is 0.
 */
int main(int argc, char *argv[])
{
	int i, add;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	add = 0;

	for (i = 1; i < argc; i++)
	{
		char *n = argv[i];
		int j;

		for (j = 0; n[j] != '\0'; j++)
		{
			if (n[j] < '0' || n[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(n);
	}

	printf("%d\n", add);

	return (0);
}
