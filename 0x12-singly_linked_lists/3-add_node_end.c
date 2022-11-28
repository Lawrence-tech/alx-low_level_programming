#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  *_strlen - returns length of string
  *@s: character of string
  *Return: length of string
  */
int _strlen(const char *s)
{
	int i;

	while (s[i] != 0)
		i++;
	return (i);
}

/**
  *add_node_end - adds a new node at the end of a list_t list.
  *@head: input header pointer
  *@str: input string value
  *Return: length of string
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->len = _strlen(str);
	node->str = strdup(str);
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	return (node);
}
