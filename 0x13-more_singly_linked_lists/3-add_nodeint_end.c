#include "lists.h"

/**
  *add_nodeint_end - adds a new node at the end of a listint_t list.
  *@n: value for new node
  *@head: pointer to head
  *Return: the address of the new element, or NULL if it failed.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	if (head == NULL)
		return (NULL);

	end = *head;
	if (end != NULL)
		while (end->next != NULL)
			end = end->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		end->next = new;
		new->next = NULL;
	}
	return (new);
}
