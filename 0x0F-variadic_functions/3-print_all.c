#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - prints a char
 * @ar: argument
 * Returns: nothing
 */
void print_c(va_list ar)
{
	printf("%c", (char)va_arg(ar, int));
}

/**
 * print_s - prints a string
 * @ar: argument
 * Returns: nothing
 */
void print_s(va_list ar)
{
	char *str;

	str = va_arg(ar, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_i - prints an int
 * @ar: argument
 * Returns: nothing
 */
void print_i(va_list ar)
{
	printf("%d", va_arg(ar, int));
}
/**
 * print_f - prints a float
 * @ar: argument
 * Returns: nothing
 */
void print_f(va_list ar)
{
	printf("%f", (float)va_arg(ar, double));
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	ptyp_t ptypt[] = {
		{'c', print_c},
		{'s', print_s},
		{'i', print_i},
		{'f', print_f},
		{'\0', NULL}
	};

	char *sep;
	int i, j, count;

	va_list ar;

	sep = "";

	va_start(ar, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (ptypt[j].ptype)
		{
			if (ptypt[j].ptype == format[i])
			{
				printf("%s", sep);
				sep = ", ";
				ptypt[j].f(ar);
				count++;
			}
			j++;
		}
		i++;
	}
	va_end(ar);
	printf("\n");
}
