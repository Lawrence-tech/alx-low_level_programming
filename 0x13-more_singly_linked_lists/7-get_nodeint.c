#include "lists.h"
#include <stdio.h>

/**
  *get_nodeint_at_index - returns the nth node of a listint_t linked list.
  *@head: pointer to head
  *@index: index of node
  *Return: node at index
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index--)
		if (head != NULL)
			head = head->next;
		else
			return (NULL);
	return (head);
}
