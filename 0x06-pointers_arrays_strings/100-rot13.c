#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
		    (str[i] >= 'A' && str[i] <= 'Z'))
		{
			int offset = (str[i] >= 'a') ? 'a' : 'A';

			for (j = 0; j < 13; ++j)
			{
				if (str[i] == offset + 12 + j)
				{
					str[i] = offset + j;
					break;
				}
				else if (str[i] == offset + j)
				{
					str[i] = offset + 12 + j;
					break;
				}
			}
		}
	}

	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}
	return (str);
}

