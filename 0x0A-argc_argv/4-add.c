#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit_string - checks if a string is a valid digit
 * @str: the string to check
 *
 * Return: 1 if the string is a digit, 0 otherwise
 */
int is_digit_string(char *str)
{
	if (*str == '-')
		str++;

	if (*str == '\0')
		return (0);

	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		return (0);

	str++;
	}

	return (1);
}

/**
 * main - adds a list of numbers provided as command-line arguments
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_digit_string(argv[i]))
	{
		printf("Error\n");
		return (1);
	}

	sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

