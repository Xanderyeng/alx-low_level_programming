#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 * character, followed by a new line.
 *
 * @str: The string to print every other character of.
 */

void puts2(char *str)
{
	int letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if (letter % 2 == 0)
		{
			_putchar(str[letter]);
		}
		letter++;
	}
	_putchar('\n');
}
