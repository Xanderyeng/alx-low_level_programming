#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		int num = h->n;
		int digits = 0;
		int divisor = 1;

	while (divisor <= num / 10)
	{
		divisor *= 10;
		digits++;
	}

	while (divisor > 0)
	{
		_putchar((num / divisor) + '0');
		num %= divisor;
		divisor /= 10;
	}

		_putchar('\n');
		h = h->next;
		count++;
	}

	return (count);
}
