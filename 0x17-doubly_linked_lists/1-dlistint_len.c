#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - print number of elements in list.
 * @h: head of list.
 * Return: len of list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int len_of_list = 0;

	while (h)
	{
		h = h->next;
		len_of_list++;
	}
	return (len_of_list);
}
