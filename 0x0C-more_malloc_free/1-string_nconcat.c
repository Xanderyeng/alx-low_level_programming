#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate tow strings
 * @s1: string one
 * @s2: string tow
 * @n: number
 * Return: NULL or p
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, leng1 = 0, j = 0, k = 0, leng2 = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[i] != '\0')
		leng1++, i++;
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s2[i] != '\0')
	{
		leng2++;
		i++;
	}
	if (n >= leng2)
		n = leng2;
	p = malloc(sizeof(char) * (leng1 + n + 1));
	if (p != NULL)
	{
		while (j < leng1)
		{
			p[j] = s1[j];
			j++;
		}
		while (k < n)
		{
			p[j] = s2[k];
			k++;
			j++;
		}
	p[j] = '\0';
	return (p);
	}
	return (NULL);
}
