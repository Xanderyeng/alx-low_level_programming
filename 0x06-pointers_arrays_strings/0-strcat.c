#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* get the end of the destination string */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* updated initial string to the destination string */
	for (j = 0; src[j] != '\0';
			j++)
	dest[i + j] = src[j];

	/* Add a terminating null byte to the end of string */
	dest[i + j] = '\0';

	return (dest);
}
