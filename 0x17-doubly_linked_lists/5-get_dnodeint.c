#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  *get_dnodeint_at_index - return dlistint node at given index
  *@head: list head
  *@index: node index
  *Return: node address, or NULL if not found.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;

	while (ptr != NULL && index--)
		ptr = ptr->next;
	return (ptr);
}
