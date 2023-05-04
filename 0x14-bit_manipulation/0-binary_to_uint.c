#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: String
 * Return: depend Condition
*/

unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] < '0' || b[len] > '1')
			return (0);
		val = 2 * val + (b[len] - '0');
	}
	return (dec_val);
}
