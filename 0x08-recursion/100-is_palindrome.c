#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _check_palindrome - checks if a string is a palindrome
 * @s: pointer to the string
 * @start: starting index of the string
 * @end: ending index of the string
 *
 * Return: 1 if string is a palindrome, 0 otherwise
 */
int _check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] == s[end])
		return (_check_palindrome(s, start + 1, end - 1));
	else
		return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the string
 *
 * Return: 1 if string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);
	return (_check_palindrome(s, 0, len - 1));
}

