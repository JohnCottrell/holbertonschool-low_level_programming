#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: argument determining number of arguments on command line
 * @argv: array pointing to strings of arguments on command line
 * Return: success 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	char *s;

	s = argv[0];

		for (i = 0; s[i] != '\0'; i++)
		{
			putchar(s[i]);
		}
		putchar('\n');
	return (0);
}
