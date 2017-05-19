#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; ++a)
	{
		if (a % 3 == 0)
		{
			printf("Fizz");
		}
		if ((a % 5) == 0)
		{
			printf("Buzz");
		}
		if ((a % 3 != 0) && (a % 5 != 0))
		{
			printf("FizzBuzz");
		}
	}
	printf("\n");
	return (0);
}
