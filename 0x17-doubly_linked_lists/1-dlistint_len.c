#include "lists.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
  *dlistint_len - returns the number of elements in a linked list
  *@h: head of list to print
  *Return: the number of nodes
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
