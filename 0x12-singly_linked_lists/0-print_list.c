#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  *print_list - prints all the elements of a list_t list.
  *@h: first node of linked list to print
  *Return: the number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			cont++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			cont++;
		}
	}
	return (cont);
}
