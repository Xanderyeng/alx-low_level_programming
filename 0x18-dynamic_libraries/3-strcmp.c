#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1: first string
 * @s2: second string
 * Return: temp
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int temp;

	while (s1[i] == s2[i] && s2[i] != '\0' && s1[i] != '\0')
	{
		i++;
	}
	temp = s1[i] - s2[i];
	return (temp);
}
