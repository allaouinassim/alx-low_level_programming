#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int shifts, Count = 0;
	unsigned long int temp;

	for (shifts = 63; shifts >= 0; shifts--)
	{
		temp = n >> shifts;

		if (temp & 1)
		{
			_putchar('1');
			Count++;
		}
		else if (Count)
			_putchar('0');
	}
	if (!Count)
		_putchar('0');
}
