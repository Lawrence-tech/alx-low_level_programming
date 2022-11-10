#include "main.h"
#include <stdlib.h>

/**
  *create_array - creates an array of chars, and initializes it with
  *a specific char.
  *@size: input size
  *@c: char input
  *Return: char
  */

char *create_array(unsigned int size, char c)
{
	char ar;
	unsigned int i = 0;

	if (size != 0)
		ar = malloc(size * sizeof(char));
	else
		return (NULL);
	if (ar == NULL)
		return (NULL);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
