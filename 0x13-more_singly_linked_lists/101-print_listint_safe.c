#include "lists.h"
#include <stdio.h>

/**
  *find_loop_listint - finds a loop in a linked list
  *@head: pointer to head
  *Return: address of node where loop returns, NULL upon fail
  */

listint_t *find_loop_listint(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}


/**
  *print_listint_safe - prints a listint_t linked list.
  *@head: pointer to head
  *
  *Description: This function can print lists with a loop
  *you should go through the list only once
  *If the function fails, exit the program with status 98
  *Return: the number of nodes in the list
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	listint_t *lpnode;
	int loop;

	lpnode = find_listint_loop((listint_t *) head);

	for (len = 0, loop = 1; (head != lpnode || loop) && head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == lpnode)
			loop = 0;
		head = head->next;
	}
	if (lpnode != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}
