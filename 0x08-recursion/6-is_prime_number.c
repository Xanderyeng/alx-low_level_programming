#include "main.h"

/**
 * is_prime_aux - evaluate n
 * @n: the number to evaluate
 * @y: counter
 * Return: 1, 0
 */
int is_prime_aux(int n, int y)
{
	if (n % y == 0 || n < 2)
	{
		{
		return (0);
		}
	}
	else if ((n - 1) == y)
	{
		return (1);
	}
	else
	{
		return (is_prime_aux(n, y + 1));
	}
}

/**
 * is_prime_number - returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n: the number
 * Return: 0, 1
 */

int is_prime_number(int n)
{
	return (is_prime_aux(n, 2));
}
