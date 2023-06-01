#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add new node at the beginning of the linked line
 * @head: double pointer to the list_t list
 * @str: add the new string to the node
 *
 * Return: write the address of a new element, or NULL it if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
	return (0);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
