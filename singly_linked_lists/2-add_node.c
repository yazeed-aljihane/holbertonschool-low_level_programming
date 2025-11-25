#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>






/**
* add_node - function that adds a new node at the beginning of a list_t list.
* @head: a pointer to the first node
* @str: the string in node
* Return: pointer to the new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i = 0;
	char *string;

	if (str == NULL)
	{
		string = "(nil)";

	}
	else
	{
		for (i = 0; str[i]; i++)
			;
		string = strdup(str);
	}
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		printf("Error\n");
		return (newnode);
	}

	newnode->str = string;
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
