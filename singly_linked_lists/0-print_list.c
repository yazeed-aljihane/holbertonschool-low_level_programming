#include "lists.h"
#include <stdio.h>
#include <stdlib.h>



/**
* print_list - print all single list nodes
* @h: pointer to the head of single list
* Return: number of nodes(size_t);
*/
size_t print_list(const list_t *h)
{
	size_t i;


	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
			i++;
			h = h->next;
			continue;
		}
		printf("[%u] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
