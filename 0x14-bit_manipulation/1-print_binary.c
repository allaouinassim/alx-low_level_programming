#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int ShiftS;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (tmp = n, ShiftS = 0; (tmp >>= 1) > 0; ShiftS++)

	for (; ShiftS >= 0; ShiftS--)
	{
		if ((n >> ShiftS) & 1)
			printf("1");
		else
			printf("0");
	}
}
