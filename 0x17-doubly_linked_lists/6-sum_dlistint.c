#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - sum all elements on list.
 * @head: ptr to 1st node.
 * Return: result of sum.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
