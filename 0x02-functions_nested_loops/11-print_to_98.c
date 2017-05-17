#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - print all natural numbers from n to 98, followed by a new line
 * @n: integer from main
 * Return: 0.
 */
void print_to_98(int n)
{
	int nat;

	nat = 98;

	if (n < 98)
	{
		for (nat = n; nat < 98; nat++)
		{
			printf("%d, ", nat);
		}
	}
	else if (n > 98)
	{

		for (nat = n; nat > 98; nat--)
		{
			printf("%d, ", nat);
		}
	}
	if (nat == 98 || n == 98)
	{
		printf("%d\n", nat);
	}
}
