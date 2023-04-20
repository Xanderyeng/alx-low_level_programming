#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print a char
 * @list: argument list
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_integer - print an integer
 * @list: argument list
 */
void print_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - print a float
 * @list: argument list
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - print a string
 * @list: argument list
 */
void print_string(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - print anything
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, j;
	char *separator = "";

	va_start(list, format);

	printer_t printers[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	while (format && format[i])
	{
		j = 0;
		while (printers[j].symbol)
		{
			if (format[i] == *(printers[j].symbol))
			{
				printf("%s", separator);
				printers[j].print(list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(list);
}
