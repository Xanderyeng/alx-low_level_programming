#include "main.h"

/**
 * print_last_digit - function that prints mutltiplication table for 9
 *	@y - intergers/
 *	@x - another interger
 *	@z - final ingerger.
*/

int print_last_digit(int)
{
	int x = 0; /* factorial */
	int y; /* count  */
	int z; /* calculated value */

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = x * y;

			if (z > 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
