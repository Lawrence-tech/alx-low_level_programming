#ifndef LISTS_H
#define LISTS_H

/**
  *struct dlintint_s - doubly linked list
  *@n: integer
  *@prev: points to the previous node
  *@next: points to the next node
  *Description: doubly linked list node structure
  */
typedef struct dlistint_s
{
	int n;
	struct dlintint_s *prev;
	struct dlintint_s *next;
} dlintint_t;

size_t print_dlistint(const dlistint_t *h);

#endif /* LIST_H */
