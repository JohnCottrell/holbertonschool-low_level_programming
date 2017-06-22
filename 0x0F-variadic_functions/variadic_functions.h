#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct ptyp - struct for matching data type with print function
 * @ptype: print
 * @f: associated function
 */
typedef struct ptyp
{
	char ptype;
	void (*f)(va_list);
} ptyp_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _VARIADIC_FUNCTIONS_H_ */
