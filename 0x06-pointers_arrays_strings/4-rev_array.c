#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: the string
 * @n: number of elements of the string
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		i++;
		n--;
	}
}
