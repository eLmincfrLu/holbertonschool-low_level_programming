#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to pointer to the head of the list
 * @idx: index to insert at (starting from 0)
 * @n: value to store in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *current;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	while (current != NULL && i < idx)
	{
		if (i == idx - 1) /* prev node */
			break;
		current = current->next;
		i++;
	}

	/* if current is NULL, idx is beyond list end */
	if (current == NULL)
		return (NULL);

	/* create new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	/* link new node */
	new->next = current->next;
	new->prev = current;
	if (current->next != NULL)
		current->next->prev = new;
	current->next = new;

	return (new);
}
