#include "main.h"

/**
  *_strncat - concatenates two strings.
  *@n: number of bytes to receive
  *@dest: pointer to  destination
  *@src: pointer to source
  *Return:a pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;

	while (*(dest + d) != '\0')
		d++;
	while (*(src + s) != '\0')
	{
		if (s < n)
		{
			*(dest + d) = *(src + s);
			d++;
		}
		s++;
	}
	return (dest);
}
