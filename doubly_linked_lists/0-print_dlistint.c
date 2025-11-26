#include "lists.h"
#include <stdio.h>
#include <stdlib.h>




/**
* print_dlistint - function that prints all the elements of a dlistint_t list.
* @h: pointer to the first node in list
* Return: the number of elements in list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;


	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}





