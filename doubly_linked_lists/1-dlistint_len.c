#include "lists.h"
#include <stdio.h>



/**
* dlistint_len - function that returns the number of nodes in list.
* @h: the pointer to the first node in list
* Return: return the number of nodes in list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

return (i);
}
