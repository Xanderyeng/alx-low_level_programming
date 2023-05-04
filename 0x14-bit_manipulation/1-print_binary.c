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
	int bit;

	/* Move the mask to the left until the leftmost bit is 1 */
	while ((mask << 1) > 0)
	{
		mask <<= 1;
	}

	/* Print the binary representation of the number */
	while (mask > 0)
	{
		bit = (n & mask) ? 1 : 0;
		_putchar(bit + '0');
		mask >>= 1;
	}
}
