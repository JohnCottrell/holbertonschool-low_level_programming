#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of arguments
 * @separator: string separating numbers
 * @...: numbers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list argmts;

	num = 0;

	if (separator == NULL)
		return;

	va_start(argmts, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(argmts, int);
		printf("%d", num);
		if (i + 1 < n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argmts);
}
