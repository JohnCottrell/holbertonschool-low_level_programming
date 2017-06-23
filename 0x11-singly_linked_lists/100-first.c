#include "lists.h"

/**
 * first - a function that prints a string before main is executed
 * Return: void
 */
void first(void) __attribute__ ((constructor));

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
