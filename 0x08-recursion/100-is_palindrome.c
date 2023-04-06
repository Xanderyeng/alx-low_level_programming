#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to evaluate
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
		return (is_palindrome(s + 1) && is_palindrome(s + len - 2));
	else
		return (0);
}
