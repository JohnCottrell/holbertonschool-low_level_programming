#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - return result of a simple operation
 * @argc: number of elements on command line
 * @argv: elements on command line
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n1;
	char *op;
	int n2;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	ptr = get_op_func(op);
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && (n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if (ptr == NULL)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", ptr(n1, n2));
	return (0);
}
