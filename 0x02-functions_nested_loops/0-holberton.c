#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = { 'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n' };
	int i;

	for (i = 0; i < 10; ++i)
		_putchar(c[i]);

	return (0);
}
