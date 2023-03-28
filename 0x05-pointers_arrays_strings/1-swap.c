#include "holberton.h"

/**
 * swap_int - swap the value of tow variables
 * @a: first variable
 * @b: second variable
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
