#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



/**
* insert_dnodeint_at_index - function that inserts new node at given position.
* @h: pointer to the first node n list
* @idx: the wanted index
* @n: the value in new node
* Return: the new node or NULL if fails
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *newnode;
	dlistint_t *box;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = tmp;
		if (tmp)
			tmp->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	for (; tmp; i++)
	{
		if (i == idx)
		{
			newnode->next = tmp;
			newnode->prev = tmp->prev;
			(tmp->prev)->next = newnode;
			tmp->prev = newnode;
			return (newnode);
		}
		if (tmp->next == NULL)
			box = tmp;
		tmp = tmp->next;
	}
	if (i == idx)
	{
	newnode->next = NULL;
	newnode->prev = box;
	box->next = newnode;
	return (newnode);
	}
return (NULL);
}
