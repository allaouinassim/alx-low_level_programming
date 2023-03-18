#include<stdio.h>
/**
 * main - Print numbers
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char Num[10] = "0123456789";
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(Num[a]);
	}
	putchar ('\n');
	return (0);
}
