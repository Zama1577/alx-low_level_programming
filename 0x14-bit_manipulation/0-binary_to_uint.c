#include "main.h"

/**
 * binary_to_uint - create a binary number to an unsigned int
 * @b: pointers to string of 0 and 1
 * Return: the converted number, or 0 if "b" is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result <<= 1;
		result += b[i] - '0';
	}

	return (result);
}
