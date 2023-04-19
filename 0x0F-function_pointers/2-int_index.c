#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the array to search
 * @size: size of the array
 * @cmp: pointer to the function to compare values
 *
 * Return: index of first element for which cmp function
 *	does not return 0
 *	-1 if no element matches or if size is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
