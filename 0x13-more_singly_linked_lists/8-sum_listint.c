#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - return sum of all data (n) in a list
 * @head: pointer to first node in the list
 * Return: 0 if is NULL or the sum
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp)
	{
		sum = sum + (temp->n);
		temp = temp->next;
	}
	return (sum);
}
