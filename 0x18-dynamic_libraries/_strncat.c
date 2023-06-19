#include "main.h"

/**
 * _strncat - concate tow strings until n limit
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of source
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	return (dest);
}
