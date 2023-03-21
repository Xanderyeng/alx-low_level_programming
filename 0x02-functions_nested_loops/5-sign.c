#include "main.h"

/**
 * print_sign - Output the sign of a number
 *	@n: zero, negative, positive digit
 *	Return: 1 if > 0, 0 if equal to 0 and
 *	-1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
