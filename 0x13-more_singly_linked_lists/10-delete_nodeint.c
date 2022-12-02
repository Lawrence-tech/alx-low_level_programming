#include "lists.h"

/**
  *delete_nodeint_at_index - deletes the node at index index of a
  *listint_t linked list.
  *@head: pointer to head.
  *@index: is the index of the node that should be deleted
  *Return: 1 if it succeeded, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prev;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}

	for (ptr = *head; index && ptr->next != NULL; index--, ptr = ptr->next)
		prev = ptr;
	if (index)
		return (-1);

	prev->next = prev->next->next;
	free(ptr);
	return (1);
}
