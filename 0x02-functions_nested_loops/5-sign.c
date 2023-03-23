#include"main.h"

/**
 * print _sign - function that prints the sign of a number
 * @n: the character to be checked
 * Return: Always (Success)
 */

int print_sign(int n);

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
