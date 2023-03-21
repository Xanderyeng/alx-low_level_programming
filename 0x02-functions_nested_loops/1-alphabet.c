#include "main.h"

/**
 *alphabet - Prints lowercase alphabet
 *
 *	Return: void
 */

void alphabet(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(c + i);
	}
	_putchar(10);
}
