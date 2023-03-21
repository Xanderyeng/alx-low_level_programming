#include "main.h"
/**
 * main - Program that prints _putchar.
 *
 * Return: Always 0.
 */

int main(void)
{
	char l[] = "_putchar";
	int i = 1;

	while (l[i] != '\0')
	{
		_putchar(l[i]);
		i++;
	}
	_putchar(10);

	return (0);
}

