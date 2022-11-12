#include "main.h"
#include <stdlib.h>

/**
  *_realloc - reallocates a memory block using malloc and free.
  *@old_size: size of old memory
  *@new_size: size of new memory
  *@ptr: old memory
  *Return: pointer, 0 on failure.
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *cal;

	if (ptr == NULL)
	{
		cal = malloc(new_size);
		if (cal == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (cal);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	cal = malloc(new_size);
	if (cal == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		_memcpy(cal, ptr, old_size);
	free(ptr);
	return (cal);
}

/**
  *_memcpy - copies memory area.
  *@dest: destination
  *@src: source
  *@n: size
  *Return: char
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;
	unsigned int y = 0;

	while (x < n)
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	return (dest);
}
