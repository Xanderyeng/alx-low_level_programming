#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - add new node at start.
 * @head: pointer to list head.
 * @n: newnode.
 * Return: NULL on fail or new node added.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	if (*head != NULL)
		newnode->next->prev = newnode;
	newnode->prev = NULL;
	*head = newnode;
	return (newnode);
}
