#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - write all the element at the beginning of the line
 * @head: create the add_node in all the element at the end of the line
 * @n: from the add_node, insert the file in n element
 *
 * Return: create the add_nodeint pointer file, when NULL is zero and it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = 0;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);
}
