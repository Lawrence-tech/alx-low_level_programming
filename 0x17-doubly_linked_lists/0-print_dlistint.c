#include "lists.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
  *print_dlistint - prints all the elements of a dlistint_t list.
  *@h: head of list to print
  *Return: the number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}