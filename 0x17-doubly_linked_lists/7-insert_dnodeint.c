#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - index the int file name
 * dlistint_t - in the int
 *@h: head node point
 *@idx: in index form
 *@n: number  of index
 *
 * Return: 0 is success
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current_node = *h;
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = current_node;
		if (current_node != NULL)
			current_node->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (i < idx - 1 && current_node != NULL)
	{
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = current_node;
	new_node->next = current_node->next;
	if (current_node->next != NULL)
		current_node->next->prev = new_node;
	current_node->next = new_node;

	return (new_node);
}
