#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: " , "
 * @n: The number of integers passed to the function.
 * @...: The integers to be printed.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
