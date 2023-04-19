#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - print the result
 * @argc: number of parameters
 * @argv: content of parameters
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int calc = 0, num1 = 0,  num2 = 0;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc = get_op_func(argv[2])(num1, num2);
	printf("%d\n", calc);
	return (0);
}
