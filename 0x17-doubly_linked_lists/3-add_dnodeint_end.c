#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - place node at list end.
 * @head: pointer to 1st node on list.
 * @n: new node.
 * Return: NULL on failure or new node address.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
		*head = newnode;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
		newnode->prev = tmp;
		newnode->next = NULL;
	}
	return (newnode);
}
