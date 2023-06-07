#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - write and insert all the element in the index,
 * in a given point in time of the index i
 * @head: create a pointer in all the element of the nodeint
 * @idx: from the nodeint pointer, construct another pointer in the index
 * @n: insert it on the new pointer nodeint i
 *
 * Return: 0 when it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (0);

	new->n = n;
	new->next = 0;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (0);
}
