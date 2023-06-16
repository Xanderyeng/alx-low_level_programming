#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - return nth node on the list.
 * @head: 1st node.
 * @index: index of node to return.
 * Return: node or NULL if non-existant.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0, i = 0;
	dlistint_t *tmp;

	tmp = head;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (len < index)
		return (NULL);
	tmp = head;
	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	else
		return (tmp);
}
