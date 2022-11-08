#include "main.h"

/**
  *_strncpy - copies a string.
  *@n: number of bytes
  *@dest:pointer to destination
  *@src: pointer to source
  *Return: copied string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i != n)
		dest[i++] = '\0';
	return (dest);
}
