#include "main.h"

/**
 * leet - convert to leet
 * @s: the string
 * Return: s
 */

char *leet(char *s)
{
	int n;
	int i;
	char l[] = "aeotl";
	char lu[] = "AEOTL";
	char leet[] = "43071";

	n = 0;
	while (s[n] != '\0')
	{
		i = 0;
		while (i <= 4)
		{
			if (s[n] == l[i] || s[n] == lu[i])
			{
				s[n] = leet[i];
			}
			i++;
		}
		n++;
	}
	return (s);
}
