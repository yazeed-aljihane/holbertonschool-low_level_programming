#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"







/**
* hash_table_set -  function that adds an element to the hash table.
* @ht: hash table
* @key: key
* @value: value
* Return: 1 if success or 0 if fail
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	unsigned long int index;


	if (ht == NULL)
		return (0);

	if (key == NULL)
		return (0);
	if (value == NULL)
		value = "";

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = newnode;
		newnode->key = strdup(key);
		newnode->value = strdup(value);
		newnode->next = NULL;
	}
	else
	{
		newnode->key = strdup(key);
		newnode->value = strdup(value);
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	}
	return (1);
}
