#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"






/**
* free_dlistint - function that frees a dlistint_t list.
* @head: pointer to the first node in list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
