#include <stdio.h>
#include <string.h>

/**
 * main - splits a string and returns and array of each word fo the string
 *
 * Return: 0 upon success
 */
int main()
{
	char string[] = "I don't know how to do this.";
	char *token;

	token = strtok(string, " ");
	printf("First token: %s\n", token);

	while ((token = strtok(NULL, " ")) != NULL)
		printf("Next token: %s\n", token);

	return (0);
}
