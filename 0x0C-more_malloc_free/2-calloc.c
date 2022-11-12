#include "main.h"
#include <stdlib.h>

/**
  *_calloc - allocates memory for an array, using malloc.
  *@nmemb: input
  *@size: input byte size
  *Return: pointer to allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cal = malloc(nmemb * size);
	if (cal == 0)
		return (0);
	for (i = nmemb * size, ptr = cal; i; i--)
		*ptr++ = 0;
	return (cal);
}
