#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
  *@head: list head
  *Return: sum. 0,if the list is empty.
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
