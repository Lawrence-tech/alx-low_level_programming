#include "lists.h"

/**
  *free_listint2 - free a listint_t list.
  *function sets the head to NULL
  *@head: pointer to head
  *Return:void
  */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *nxt;

	nxt = *head;
	while (nxt != NULL && head != NULL)
	{
		tmp = nxt;
		nxt = nxt->next;
		free(tmp);
	}
	*head = NULL;
}
