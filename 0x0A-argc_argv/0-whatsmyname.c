#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the executable, followed by a newline
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[0][i])
	{
		_putchar(argv[0][i]);
	{	i++;
	}
	_putchar('\n');
	return (0);
}
