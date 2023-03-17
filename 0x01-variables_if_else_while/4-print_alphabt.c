#include <stdio.h>

/**
 * main - Prints the alphabet letters in lowercase,
 *	except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{i
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
