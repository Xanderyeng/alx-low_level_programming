#include "main.h"

/**
 * *string_toupper - changes all lowercase letters
 * @s: string
 * Return: always 0
 */

char *string_toupper(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		if (s[n] >= 'a' && s[n] <= 'z')
		s[n] = s[n] - 32;
		n++;
	}
	return (s);
}
