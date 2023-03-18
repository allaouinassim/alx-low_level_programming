#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main- print the last digit and compare
 * Return: 0 if the last digit is zero and number otherwise
 *
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last_digit > 5)
	{
	printf("Last digit of %d is grater than 5\n", n);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
	printf("Last digit of %d is less than 6 and not 0\n", n);
	}
	else if (last_digit == 0)
	{
	printf("Last digit of %d is 0\n", n);
	}
	return (0);
}
