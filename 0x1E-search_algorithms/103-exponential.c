#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a
 *	sorted array using Exponential Search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The first index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = 1;

	if (array == NULL)
	return (-1);

	while (high < size && array[high] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		low = high;
		high *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	if (high >= size)
	high = size - 1;

	return (binary_search(array, low, high, value));
}

/**
 * binary_search - Searches for a value in a subarray using Binary Search
 * @array: Pointer to the first element of the array to search in
 * @low: Starting index of the subarray
 * @high: Ending index of the subarray
 * @value: Value to search for
 * Return: The index where the value is located, or -1 if not found
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	while (low <= high)
	{
		size_t mid = (low + high) / 2;

		printf("Searching in array: ");
	for (size_t i = low; i <= high; i++)
	{
		if (i == high)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}

	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		low = mid + 1;
	else
		high = mid - 1;
	}

	return (-1);
}
