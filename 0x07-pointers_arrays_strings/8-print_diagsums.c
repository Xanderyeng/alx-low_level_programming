#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diags of an array of a array
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1;
	int sum2;

	i = 0;
	sum1 = a[i];
	while (i < ((size * size) - 1))
	{
		i = i + (size + 1);
		sum1 = sum1 + a[i];
	}
	printf("%d, ", sum1);

	j = size - 1;
	sum2 = a[j];
	while (j < ((size * size) - size))
	{
		j = j + (size - 1);
		sum2 = sum2 + a[j];
	}
	printf("%d\n", sum2);
}
