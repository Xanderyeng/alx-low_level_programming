#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies a list of numbers provided as command-line arguments
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int i, mult;

	if (argc > 2)
	{
		mult = 1;

		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
			printf("%d\n", mult);
			return (0);
		}
	else
	{
		printf("Error\n");
		return (1);
	}
}

