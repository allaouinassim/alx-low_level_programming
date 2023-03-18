#include<stdio.h>

/**
 * main - Prints the alphabet expect e & q
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int a;

	for (a = 0; a < 24; a++)
	{
		putchar(alp[a]);
	}
	putchar ('\n');

	return (0);
}
