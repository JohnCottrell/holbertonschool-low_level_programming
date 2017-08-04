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
        char *new_str, *buffer;
        const char *delimiter;
        char **strofstr;
	size_t len_buffer;
	ssize_t len;

	*buffer = NULL;
        delimiter = " ";
	len_buffer = 0;

 	new_str = *av;

	len = getline(&buffer, &len_buffer, 1);

	av = malloc(sizeof(char *) * len;
	{
		if (av == NULL)
		{
			free(buffer);
			dprintf(STERR_FILENO, "Memory allocation error.\n");
			exit(1);
		}
		for (i = 0; av[i] = strtok(buffer, delimiter) != NULL, i++)
		{
/* Here, add what I get from one array to the other, av to new_str? */
		}

	}

        i = 0;
        do
        {
                new_str = strtok(av, delimiter);
                strofstr[i] = new_str;
                i++;
        } while (!new_str)
		;
	return (strofstr);
}

/**
 * main - prints each word of an array of strings
 * @arofstr: array of strings
 * Return: 0 on success.
 */
int main(char **arofstr)
{

	printf("%s\n", arofstr);
	return (0);
}
