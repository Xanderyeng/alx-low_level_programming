#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be converted
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned int bits = sizeof(n) * 8;
	int flag = 0;

	while (bits--)
	{
		if ((n >> bits) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');
	}
	if (!flag)
		_putchar('0');
}
