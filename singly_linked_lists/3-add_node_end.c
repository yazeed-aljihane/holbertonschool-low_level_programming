#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




/**
* add_node_end - function that adds a new node at the end of a list_t list.
* @head: pointer to the first elemnt in the list
* @str: the new string in new node
* Return: pointer to the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *tmp;
	unsigned int i = 0;
	char *string;

	if (str == NULL)
		string = "(nil)";
	else
	{
		string = strdup(str);
		for (i = 0; str[i]; i++)
			;
	}
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		printf("Error\n");
		return (newnode);
	}
	if (*head == NULL)
	{
	newnode->str = string;
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
	tmp = tmp->next;
	}
	newnode->str = string;
	newnode->len = i;
	tmp->next = newnode;
	newnode->next = NULL;
	return (newnode);
}
