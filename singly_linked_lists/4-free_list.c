#include "lists.h"
#include <stdio.h>
#include <stdlib.h>






/**
* free_list - function that frees a list_t list.
* @head: pointer to the first node in linked list
*/
void free_list(list_t *head)
{
list_t *tmp;


while (head)
{
tmp = head->next;
free(head);
head = tmp;
}

}
