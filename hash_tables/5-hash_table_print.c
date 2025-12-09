#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"








/**
* hash_table_print - function that prints a hash table.
* @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t *tmp;
	int check = 0;

	if (ht == NULL)
		return;

	size = ht->size;
	putchar('{');
	for (i = 0; i < size; i++)
	{
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				if (check == 1)
					printf(", ");
				printf("\'%s\': \'%s\'", tmp->key, tmp->value);

				check = 1;
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
