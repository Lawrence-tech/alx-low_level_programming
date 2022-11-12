#include "main.h"
#include <stdlib.h>

/**
  *string_nconcat - concatenates two strings.
  *@s1: array input
  *@s2: other input
  *@n: bytes
  *Return: char, otherwise null.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	char *nul = "";
	unsigned int l1, l2;

	l1 = l2 = 0;
	if (s2 == NULL)
		s2 = nul;
	if (s1 == NULL)
		s1 = nul;
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	l2++;
	if (n >= l2)
		n = l2;
	str = malloc(sizeof(*str) * n + (l1 + 1));
	if (str == NULL)
		return (NULL);
	l1 = 0;
	while (s1[l1] != '\0')
	{
		str[l1] = s1[x];
		l1 += 1;
	}
	l2 = 0;
	while (s2[l2] != '\0' && l2 < n)
	{
		str[l1] = s2[l2];
		l1++;
		l2++;
	}
	str[l1] = '\0';
	return (str);
}
