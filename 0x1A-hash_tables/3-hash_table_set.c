#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node, *head;
	char *dup_value = (value == NULL) ? NULL : strdup(value);

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	if (dup_value == NULL)
	{
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(dup_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		free(dup_value);
		return (0);
	}
	new_node->value = dup_value;
	new_node->next = NULL;
	head = ht->array[index];
	ht->array[index] = new_node;
	new_node->next = head;
	return (1);
}
