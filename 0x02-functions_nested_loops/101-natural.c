#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	b = 3;
	c = 5;
	d = 1;

	while (b < 1024)
	{
		printf("%d", a);
		e = c + d;
		c = d;
		d = e;
		b++;
	}
	return (0);
}
