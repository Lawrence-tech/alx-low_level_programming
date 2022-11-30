#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  *print_listint - prints all the elements of a listint_t list.
  *@h: pointer to head
  *Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
