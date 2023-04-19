#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Selects correct function
 *	to perform the operation
 *	asked by the user.
 * @s: The operator passed as argument to the program.
 *
 * Return: pointer to the function that matches the
 *	operator given as a parameter.
 *	If s does not match any of the 5
 *	expected operators (+, -, *, /, %),
 *	return NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
	return (NULL);
}
