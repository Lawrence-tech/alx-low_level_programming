#include "main.h"
#include <stdlib.h>

/**
  *str_concat - concatenates two strings.
  *@s1: input char
  *@s2: other input
  *Return: char
  */

char *str_concat(char *s1, char *s2)
{
	char *con;
	char *nul = "";
	unsigned int i, j, x, y;

	i = j = x = y = 0;
	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	j += 1;
	con = malloc((i + j) * sizeof(*con));
	if (con == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		con[x] = s1[x];
		x += 1;
	}
	while (s2[y] != '\0')
	{
		con[x] = s2[y];
		y += 1;
		x += 1;
	}
	con[x] = '\0';
	return (con);
}
