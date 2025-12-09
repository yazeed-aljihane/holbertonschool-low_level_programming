#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"



/**
* hash_table_delete -  function that deletes a hash table.
* @ht:  is the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t *tmp, *box;

	if (ht == NULL)
		return;
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				box = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = box;
			}
		}
	}
	free(ht->array);
	free(ht);
}




