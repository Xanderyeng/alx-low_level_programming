#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - creates a duplicate of a string
 * @str: the string to duplicate
 *
 * Return: p or NULL if memory allocation fails or
 *	str is NULL
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		p[i] = str[i];

	p[i] = '\0';

	return (p);
}
