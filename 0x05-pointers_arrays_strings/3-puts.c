#include "holberton.h"

/**
 * _puts - print a string followed by a new line
 * @str: the string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
