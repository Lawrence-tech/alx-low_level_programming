#include "lists.h"
#include <stdio.h>

/**
  *free_list - frees a list_t list.
  *@head: head of list to free
  *Return: always 0.
  */

void free_list(list_t *head)
{
	list_t *next;

	if (head == NULL)
		return;
	next = head->next;

	while (head != NULL)
	{
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = next;
		if (head != NULL)
			next = head->next;
	}
}
