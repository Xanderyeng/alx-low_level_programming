#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a
 *	sorted array using Interpolation Search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The first index where the value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
	return (-1);

	while (low <= high)
	{
	size_t pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

	if (pos < low || pos > high)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		break;
	}

	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

	if (array[pos] == value)
	return (pos);
	else if (array[pos] < value)
		low = pos + 1;
	else
		high = pos - 1;
	}

	return (-1);
}
