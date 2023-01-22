#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  *delete_dnodeint_at_index - deletes the node at index index of list
  *@head: node head
  *@index: node index
  *Return: 1 if it succeeded, -1 if it failed.
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head, *tmp;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(ptr);
		return (1);
	}
	while (ptr->next != NULL && index-- > 1)
		ptr = ptr->next;
	if (index > 1 || ptr->next == NULL)
		return (-1);
	tmp = ptr->next;
	ptr->next = tmp->next;
	if (ptr->next != NULL)
		ptr->next->prev = ptr;
	free(tmp);
	return (1);
}
