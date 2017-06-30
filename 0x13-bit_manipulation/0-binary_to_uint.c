#include "holberton.h"

/**
 * binary_to_uint - conversts a binary number to an unsigned int
 * @b: pointer to a string of 0 or 1 chars
 * Return: converted number or 0 i b is NULL or chars in b are not 0 or 1 only
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, i;

	dec = 0;
	i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		else if (b[i] == '1')
			dec = (dec << 1) | 1 ;
		else if (b[i] == '0')
			dec <<= 1;
	}
	return (dec);
}
