#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* delete_dnodeint_at_index -  function that deletes the node at index of list
* @head: pointer to the first node in list
* @index: the wanted index to delete
* Return: 1 if succssed or -1 if fails
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i;

	for (i = 0; tmp; i++)
	{
		if (i == index && tmp->next == NULL && tmp->prev == NULL)
		{
			free(tmp);
			*head = NULL;
			return (1);
		}

		if (i == index && tmp->next == NULL)
		{
			(tmp->prev)->next = tmp->next;
			tmp->prev = NULL;
			free(tmp);
			return (1);
		}

		if (i == index && tmp->prev == NULL)
		{
			(tmp->next)->prev = tmp->prev;
			*head = tmp->next;
			tmp->next = NULL;
			free(tmp);
			return (1);
		}

		if (i == index)
		{
			(tmp->prev)->next = tmp->next;
			(tmp->next)->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
	}

	return (-1);
}
