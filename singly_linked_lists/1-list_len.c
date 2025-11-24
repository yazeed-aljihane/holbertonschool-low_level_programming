#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* list_len - function count the element in list
* @h: pointer to the head of list
* Return: the number of elements in list
*/
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
return (i);
}
