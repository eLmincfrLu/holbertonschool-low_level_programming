#include "hash_tables.h"
#include <string.h>

/**
 * create_node - creates a new hash node
 * @key: key string
 * @value: value string
 *
 * Return: pointer to the new node or NULL
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	return (node);
}

/**
 * update_value - updates value of a node
 * @node: node to update
 * @value: new value
 *
 * Return: 1 on success, 0 on failure
 */
int update_value(hash_node_t *node, const char *value)
{
	char *val_copy;

	val_copy = strdup(value);
	if (!val_copy)
		return (0);

	free(node->value);
	node->value = val_copy;
	return (1);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key (cannot be empty)
 * @value: value (duplicated)
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *current, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (update_value(current, value));
		current = current->next;
	}

	new_node = create_node(key, value);
	if (!new_node)
		return (0);

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
