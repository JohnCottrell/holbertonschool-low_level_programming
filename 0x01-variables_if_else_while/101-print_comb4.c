#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h;
	int i;
	int j;

	for (h = '0'; h <= '7'; h++)
	{
		for (i = h + 1; i <= '8'; i++)
		{
			for (j = i + 1; j <= '9'; j++)
			{
				putchar(h);
				putchar(i);
				putchar(j);
				if (h != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
