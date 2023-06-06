#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - print all the number in the linked int
 * @head: write and put the first node at thr beginning of the line
 * @n: insert and demonstrate the new node n in the list
 *
 * Return: point the new node if NULL is zero and it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
			if (!new)
			return (0);

			new->n = n;
			new->next = *head;
			*head = new;
			return (new);
			}
