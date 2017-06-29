#include "holberton.h"

/**
 * binary_to_uint - conversts a binary number to an unsigned int
 * @b: pointer to a string of 0 or 1 chars
 * Return: converted number or 0 i b is NULL or chars in b are not 0 or 1 only
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, dec;

	len = 0;
	dec = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
		;
	for (len = (len + 1); b[len]; len--)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		if (b[len] = '1')
			dec += fact;
		fact = (fact * 2);
	}
	return (dec);
}
