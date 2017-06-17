#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	ptyp_t ptypt = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	int i, j;

	i = 1;
	while (format && format[i])
	{
		j = 1;
		while (ptypt[j])
		{
			if (ptypt[j] == format[i])
			{
				ptypt[j].f(ap);
			}
			j++;
		}
		i++;
	}
}
