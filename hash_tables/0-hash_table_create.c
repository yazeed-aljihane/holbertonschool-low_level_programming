#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"




/**
* hash_table_create - function that creates a hash table.
* @size: the size of array
* Return: pointer to hash table or NULL if fails
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tableptr;
	hash_node_t **array;



	tableptr = malloc(sizeof(hash_table_t));
	if (tableptr == NULL)
		return (NULL);

	array = calloc(size, sizeof(hash_node_t *));
	if (array == NULL)
	return (NULL);

	tableptr->size = size;
	tableptr->array = array;

	return (tableptr);
}
