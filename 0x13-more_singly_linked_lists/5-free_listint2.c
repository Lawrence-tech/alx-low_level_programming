#include "lists.h"

/**
  *free_listint2 - free a listint_t list.
  *function sets the head to NULL
  *@head: pointer to head
  *Return:void
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	for (temp = (*head)->next; *head != NULL; *head = temp)
	{
		temp = (*head)->next;
		free(*head);
	}
}
