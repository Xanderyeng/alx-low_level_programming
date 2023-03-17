#include <stdio.h>

/**
 * main - This program prints all single digit numbers of
 *	base 10 starting from 0, using only
 *	putchar and without type char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar((digit % 10) + '0');

	putchar('\n');

	return (0);
}
