#include "main.h"

/**
 *_strcat - append src string to the dest string
 *@dest: pointer to destination
 *@src: pointer to source
 *Return: char
 */

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (*(dest + d) != '\0')
		d++;
	while (*(src + s) != '\0')
	{
		*(dest + d) = *(src + s);
		d++;
		s++;
	}
	return (dest);
}
