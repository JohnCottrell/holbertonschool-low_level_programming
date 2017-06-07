#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of command line arguments
 * @av: passed arguments
 * Return: new string
 */
char *argstostr(int ac, char **av)
{
	char *newstring;

	int i, j, k, len;

	len = 0;
	k = 0;

	if (ac < 1 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 1; i < ac; i++)
			for (j = 0; av[i][j]; j++)
			{
				len++;
			}
		newstring = malloc((len + 1 + ac) * sizeof(char));
		if (newstring == NULL)
		{
			return (NULL);
		}
		for (i = 1; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				newstring[k++] = av[i][j];
			}
			newstring[k++] = '\n';
		}
		newstring[k] = '\0';
	}
	return (newstring);
}
