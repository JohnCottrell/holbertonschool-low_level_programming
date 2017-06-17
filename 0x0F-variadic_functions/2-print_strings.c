#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *pstr;

	va_list str;

	if (separator == NULL)
		return;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		pstr = va_arg(str, char *);
		if (pstr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", pstr);
		}
		if ((i + 1) < n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
