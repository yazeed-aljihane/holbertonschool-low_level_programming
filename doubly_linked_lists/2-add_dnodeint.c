#include "lists.h"
#include <stdio.h>
#include <stdlib.h>




/**
* add_dnodeint - function adds new node at the beginning of a dlistint_t list.
* @head: pointer to the first node in list
* @n: the value of the new node
* Return: return pointer to the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
