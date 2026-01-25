#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add/update the key/value
 * @key: key to add (cannot be empty)
 * @value: value associated with the key (will be duplicated)
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int idx;
	char *value_copy;

	if (!ht || !key || !*key || !value)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];

	/* check if key already exists, update value */
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value_copy;
			return (1);
		}
		current = current->next;
	}

	/* key not found, create new node */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(value_copy);
		return (0);
	}

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(value_copy);
		free(new_node);
		return (0);
	}

	new_node->value = value_copy;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
