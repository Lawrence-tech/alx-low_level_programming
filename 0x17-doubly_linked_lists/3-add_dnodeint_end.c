#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
  *@head: head of list
  *@n: value of node
  *Return: the address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	ptr = *head;
	if (ptr != NULL)
		while (ptr->next != NULL)
			ptr = ptr->next;
	new->n = n;
	new->next = NULL;
	new->prev = ptr;
	if (ptr != NULL)
		ptr->next = new;
	else
		*head = new;
	return (new);
}

