#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at the given index.
 * @head: Pointer to the first node.
 * @index: The position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		free(tmp);
	}
	else
	{
		tmp = *head;
		while (i < index)
		{
			if (tmp->next == NULL)
				return (-1);
			tmp = tmp->next;
			i++;
		}
		if (i == index)
		{
			if (tmp->next == NULL)
			{
				tmp->prev->next = NULL;
				free(tmp);
			}
			else
			{
				tmp->next->prev = tmp->prev;
				tmp->prev->next = tmp->next;
				free(tmp);
			}
		}
	}
	return (1);
}
