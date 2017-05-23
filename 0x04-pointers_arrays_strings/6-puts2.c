#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string, followed by a new line
 * @str: - string to be processed
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
