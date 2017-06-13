#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
			printf("(nil)");
		else
			printf("%s", d->name);
		printf("\n");

		printf("Age: ");
		printf("%f", d->age);
		printf("\n");

		printf("Owner: ");
		if (d->owner == NULL)
			printf("(nil)");
		else
			printf("%s", d->owner);
		printf("\n");
	}
}
