#include "main.h"

/**
 * main - duplicates a string
 *
 * Return: a pointer to the newly allocated memory
 *	containing a copy of the string, or
 *	NULL if memory allocation fails or str is NULL
 */

int main(void)
{
	char *str = "Hello, world!";
	char *dup = _strdup(str);

	if (dup == NULL)
		return (1);

	free(dup);

	return (0);
}

