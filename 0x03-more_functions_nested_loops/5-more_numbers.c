#include "holberton.h"

/**
 * more_numbers - prints numbers from 0 to 14, followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, b, x, y;

	x = 0;
	y = 0;

	while (y < 10)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			{
				b = x / 10;
				_putchar(b + '0');
			}
			a = x % 10;
			_putchar(a + '0');
		}
		_putchar('\n');
		y++;
	}
}
