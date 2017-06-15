#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects operation asked for by user
 * @s: operator passed to the argument
 * Return: pointer to the appropriate function, or NULL if no match
 *
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].f != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
