#include "lists.h"
#include <stdio.h>




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
