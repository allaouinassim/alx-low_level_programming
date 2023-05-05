#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shifts, Count = 0;
	unsigned long int temp;
	unsigned long int exclusive = n ^ m;

	for (shifts = 63; shifts >= 0; shifts--)
	{
		temp = exclusive >> shifts;
		if (temp & 1)
			Count++;
	}
	return (Count);
}
