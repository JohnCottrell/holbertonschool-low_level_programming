#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * splitstr - splits a string, returns array of each word of string
 * @string: pointer to a string
 * @delimiter: delimiter between strings
 * Return: an array of each word of the string.
 */
char **splitstr(int ac __attribute__((unused)), char *av)
{
	int i;
	char *new_str;
	const char *delimiter;
	char **strofstr;

	delimiter = " ";

	new_str = *av;

	i = 0;
	do
	{
		new_str = strtok(av, delimiter);
		strofstr[i] = new_str;
		i++;
	} while (!new_str)
	return (strofstr);
}
