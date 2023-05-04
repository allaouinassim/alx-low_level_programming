#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: string
 * Return: depend condition
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int TOTAL, Pwr;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (Pwr = 1, TOTAL = 0, len--; len >= 0; len--, Pwr *= 2)
	{
		if (b[len] == '1')
			TOTAL += Pwr;
	}
	return (TOTAL);
	
}
