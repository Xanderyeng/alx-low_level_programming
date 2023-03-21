#include "main.h"

/**
 * _islower - checks for lowercase character
 *	@c: integer representing ascii value of character
 *	Return: 1 c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
