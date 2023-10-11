#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_search - search a value in given array
 * @array: Given array
 * @size: Lenght of array
 * @value: value to search in array
 * Return: The index when is found the match.
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned int middle, low = 0, hight = (size - 1), i;

	while (hight >= low && array != NULL)
	{
		middle = ((hight + low) / 2);
		printf("Searching in array: ");
		i = low;
		while (i <= hight)
		{
			if (i == hight)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
			i++;
		}
		printf("\n");
		if (value == array[middle])
		{
			return (middle);
		}
		else if (array[middle] > value)
		{
			hight = middle - 1;
		}
		else
		{
			low = middle + 1;
		}
	}
	return (-1);
}
