#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the hash table array.
 *
 * Return: A pointer to the newly created sorted hash table,
 * or NULL if an error occurs.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	if (size == 0)
		return (NULL);



	table = calloc(1, sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->array = calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->shead = NULL;
	table->stail = NULL;


	return (table);
}




/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add (cannot be an empty string).
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */


 int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *tmp;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(value_copy);
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	/* Logic to insert into sorted linked list */
	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;

		new_node->sprev = tmp;
		new_node->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new_node;
		else
			tmp->snext->sprev = new_node;
		tmp->snext = new_node;
	}
	return (1);
}




/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to look for.
 *
 * Return: The value associated with the element,
 * or NULL if the key couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{

	shash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	if (key == NULL)
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % ht->size;

	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(key, tmp->key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
	}

	return (NULL);
}


/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * Description: Prints the hash table using the sorted linked list.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int check = 0;

	if (ht == NULL)
		return;
	printf("{");
	tmp = ht->shead;
	while (tmp)
	{
		if (check == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		check = 1;
		tmp = tmp->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table.
 *
 * Description: Prints the hash table using the sorted linked list in reverse.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int check = 0;

	if (ht == NULL)
		return;

	printf("{");
	tmp = ht->stail;
	while (tmp)
	{

		if (check == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		check = 1;
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *box;

	if (ht == NULL)
		return;


	tmp = ht->shead;
	while (tmp)
	{
		box = tmp->snext;
		free(tmp->value);
		free(tmp->key);
		free(tmp);
		tmp = box;
	}
	free(ht->array);
	free(ht);
}





