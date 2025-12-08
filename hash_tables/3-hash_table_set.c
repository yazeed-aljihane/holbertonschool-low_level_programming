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
	hash_node_t *tmp;
	unsigned long int index;


	if (ht == NULL)
		return (0);

	if (key == NULL)
		return (0);
	if (value == NULL)
		value = "";
	
	index = hash_djb2((const unsigned char *)key) % ht->size;
	tmp = ht->array[index];
	while(tmp)
	{

		if (strcmp(tmp->key,key) == 0)
		{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
		}
		tmp = tmp->next;
	}
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		return (0);
	}
		
		newnode->key = strdup(key);
		newnode->value = strdup(value);
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	return (1);
}
