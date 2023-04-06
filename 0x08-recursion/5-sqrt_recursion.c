/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: the number to compute the sqrt of
 *
 * Return: the sqrt of n, or -1 if n does not have a natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0 || n == 1)
	return (n);
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - recursive helper function for _sqrt_recursion
 * @n: the number to compute the sqrt of
 * @i: the current guess for the sqrt of n
 *
 * Return: the sqrt of n, or -1 if n does not have a natural sqrt
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	return (i);
	if (i * i > n)
	return (-1);
	return (_sqrt_helper(n, i + 1));
}
