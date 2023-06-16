#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print elements of a doubly linked list.
 * @h: head of list.
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int numbernodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		numbernodes++;
	}
	return (numbernodes);
}
