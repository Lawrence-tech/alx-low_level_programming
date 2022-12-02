#include "lists.h"

/**
  *sum_listint - sum of all the data (n) of a listint_t linked list.
  *@head: pointer to head
  *Return: sum of all the data (n) of a listint_t linked list.
  *if the list is empty, return 0.
  */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;
	return (sum);
}
