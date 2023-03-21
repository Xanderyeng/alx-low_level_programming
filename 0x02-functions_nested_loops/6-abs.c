#include "main.h"

/**
 * _abs - Calculates the absolute value of an integer
 *	@n: integer whose absolute value is to be determined
 *	Return: int
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
