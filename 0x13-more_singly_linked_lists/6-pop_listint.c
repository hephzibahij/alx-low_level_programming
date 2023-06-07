#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - print all the element and delete them
 * @head: write all the print_listint element in the node
 *
 * Return: 0 when it fails to delete
 * when NULL is an empty list file 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
