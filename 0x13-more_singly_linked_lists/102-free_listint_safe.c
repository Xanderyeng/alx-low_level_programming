#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely
 *
 * @h: A pointer to a pointer to the head node of the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp;

	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			tmp = *h;
			*h = NULL;
			while (tmp != NULL)
			{
				tmp = tmp->next;
				free(*h);
				*h = tmp;
				count++;
			}
			return (count);
		}

	tmp = (*h)->next;
	free(*h);
	*h = tmp;
	count++;
	}

	return (count);
}
