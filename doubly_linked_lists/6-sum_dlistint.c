#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



/**
* sum_dlistint - function that returns the sum of all the data (n) of a list.
* @head: pointer to the first node in list
* Return: return the sum of n of all nodes or 0 if null
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int total = 0;


	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp)
	{
	total += tmp->n;
	tmp = tmp->next;
	}


	return (total);


}
