#include "lists.h"
#include <stdio.h>
#include <stdlib.h>




/**
* add_dnodeint_end - function that adds a new node at the end of list.
* @head: pointer to the first node
* @n: the value of new node
* Return: return pointr to the new node and null if fail
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *tmp;




	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		printf("Error\n");
		return (NULL);

	}
	tmp = *head;
	while (tmp && tmp->next)
	{
		tmp = tmp->next;
	}

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = tmp;
	if (tmp)
		tmp->next = newnode;
	else
		*head = newnode;
	return (newnode);
}
