#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculates length of string
 * @str: string
 * Return: length of str
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;
	return (len);
}

/**
 * _strcpy - copies string to new destination
 * @str: string to be copied
 * Return: copy of string
 */
char *_strcpy(char *str)
{
	int i;

	char *dest;

	dest = malloc((_strlen(str) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a pointer to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = _strcpy(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = _strcpy(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	return (dog);
}
