#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"



/**
* hash_table_get - function that retrieves a value associated with a key.
* @ht: hash table
* @key: the key of value
* Return: value if success or NULL otherwaise
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);
	index = hash_djb2((const unsigned char *)key) % ht->size;

	if (ht->array[index] == NULL)
		return (NULL);

	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}

	return (NULL);
}
