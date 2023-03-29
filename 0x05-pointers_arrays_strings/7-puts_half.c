#include <stdio.h>
#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 *
 * @str: The string to print the second half of.
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	/* Calculate length of string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Print second half of string */
	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
