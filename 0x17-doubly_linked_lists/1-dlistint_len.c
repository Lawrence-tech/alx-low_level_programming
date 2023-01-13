#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
  *dlistint_len - returns the number of elements in a linked list
  *@h: head pointer. 
  *Return: length of list. 0 if does not exist
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *p = h;

	while (p != NULL)
	{
		p = p->next;
		len++;
	}
	return (len);
}
