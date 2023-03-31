#include "main.h"

/**
 * cap_string - capitalize letters
 * @s: reference string
 * Return: s
 */

char *cap_string(char *s)
{
	char a[] = " \n\t,;.!?\"(){}";
	int n;
	int j;

	j = 0;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
	while (s[j] != '\0')
	{
		n = 0;
		while (a[n] != '\0')
		{
			if (s[j] == a[n])
			{
				if (s[j + 1] >= 'a' && s[j + 1] <= 'z')
				s[j + 1] = s[j + 1] - 32;
			}
			n++;
		}
	j++;
	}
	return (s);
}
