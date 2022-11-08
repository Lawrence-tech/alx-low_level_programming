#include "main.h"

/**
  *_memcpy - copies memory area.
  *@dest: destination
  *@src: source
  *@n: size of bytes.
  *Return: char
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
