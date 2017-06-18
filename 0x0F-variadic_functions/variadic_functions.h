#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
/**
 * struct prnt - Struct prnt
 * @ptyp: print
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
