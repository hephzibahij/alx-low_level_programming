#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - print the reverse listint in the element
 * @head: write the new node in the pointer
 *
 * Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = 0;
	listint_t *next = 0;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
