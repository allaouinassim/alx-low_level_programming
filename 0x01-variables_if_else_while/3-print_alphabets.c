#include<stdio.h>

/**
 * main - Prints the alphabet in lower case and then in uppercase
 * Return: Always 0 (Success)
 *
 */

int main(void)
{

	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
