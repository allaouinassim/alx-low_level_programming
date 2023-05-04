#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: String
 * Return: depend Condition
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int Pwr, len, TOTAL = 0;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (Pwr = 0; Pwr < len; Pwr++)
	{
		TOTAL = TOTAL * 2 + (b[Pwr] - '0');
	}
	return (TOTAL);
}
