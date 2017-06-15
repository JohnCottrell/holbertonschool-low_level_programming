#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add- returns the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference between two integers
 * @a: first integer
 * @b: second integer
 * Return: the difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two integers
 * @a: first integer
 * @b: second integer
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: the result of the division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
