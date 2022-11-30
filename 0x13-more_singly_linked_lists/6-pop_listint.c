#include "lists.h"

/**
  *pop_listint - deletes the head node of a listint_t linked list,
  *and returns the head node’s data (n).
  *@head: pointer to head
  *Return: value of node, or 0 if empty.
  */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = next;
	return (n);
}
