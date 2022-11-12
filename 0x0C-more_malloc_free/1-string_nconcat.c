#include "main.h"
#include <stdlib.h>

/**
  *string_nconcat - concatenates two strings.
  *@s1: input
  *@s2: other input
  *@n: bytes
  *Return: char, otherwise null.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	char *nul = "";
	unsigned int len1, len2;

	len1 = len2 = 0;
	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;
	while (s1[len1] != '\0')
		len1 += 1;
	while (s2[len2] != '\0')
		len2 += 1;
	len2++;
	if (n >= len2)
		n = len2;
	str = malloc(sizeof(*str) * n + (len1 + 1));
	if (str == NULL)
		return (NULL);
	/*len1 = 0;*/
	while (s1[len1] != '\0')
	{
		str[len1] = s1[len1];
		len1 += 1;
	}
	/*len2 = 0;*/
	while (s2[len2] != '\0' && len2 < n)
	{
		str[len1] = s2[len2];
		len1++;
		len2++;
	}
	str[len1] = '\0';
	return (str);
}
