/**
 * _sqrt_recurs - returns the natural square root of a number
 * @n: the number to compute the square root of
 * @y: number to evaluate / consider
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recurs(int n, int y)
{
	if (n < (y * y))
	{
		return (-1);
	}
	else if (n == y * y)
		return (y);
	else
		return (_sqrt_aux(n, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to evaluate
 * Return: y
 */

int _sqrt_recursion(int n)
{

	return (_sqrt_aux(n, 1));
}
