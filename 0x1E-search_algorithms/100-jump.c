#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * jump_search - search a value in given array by jumping blocks
 * @array: Given array
 * @size: Lenght of array
 * @value: value to search in array
 * Return: The index when is found the match.
*/
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0;

	if (array == NULL)
		return (-1);
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (step < size && array[step] < value)
	{
		prev = step;
		step += sqrt(size);
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
	while (prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
		{
			return (prev);
		}
		prev++;
	}
	return (-1);
}
