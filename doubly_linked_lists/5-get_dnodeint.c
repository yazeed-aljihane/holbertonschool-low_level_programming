#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



/**
* get_dnodeint_at_index - function that returns the nth node of a list.
* @head: pointer to first node
* @index: the index of wanted node
* Return: the node of wanted index or NULL if fail
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tmp;
unsigned int i;

tmp = head;
for (i = 0; tmp; i++)
{
if (i == index)
	return (tmp);

tmp = tmp->next;
}

return (NULL);
}
