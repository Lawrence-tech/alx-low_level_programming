#include "lists.h"
#include <stdio.h>

/**
  *list_len - returns the number of elements in a linked list_t list.
  *@h: fisrt node of linked list to count from
  *Return: number of nodes printed
  */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
