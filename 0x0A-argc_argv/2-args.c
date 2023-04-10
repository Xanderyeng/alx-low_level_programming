#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplication of numbers
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int mult;

	if (argc > 2)
	{
		mult = 1;
		for (i = 1; i < argc; i++)
		{
			mult = mult * atoi(argv[i]);
		}
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
