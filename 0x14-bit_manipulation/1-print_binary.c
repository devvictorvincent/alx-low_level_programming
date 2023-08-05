#include "main.h"

/**
 * binary_to_uint - converts a passed binary number to unsigned int
 * @b: string containing the passed binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int d_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		d_val = 2 * d_val + (b[i] - '0');
	}

	return (d_val);
}
