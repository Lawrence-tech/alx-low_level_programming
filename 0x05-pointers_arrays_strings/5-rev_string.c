#include "main.h"

/**
  *rev_string - a function that reverses a string.
  *@s: pointer to a string.
  *return: always 0
  */

void rev_string(char *s)
{
	int i = 0;
	int x = 0;
	char strng;

	while (*(s + i) != '\0')
		i++;
	i--;

	while (x < i)
	{
		strng = s[i];
		s[i] = s[x];
		s[x] = strng;
		x++;
		i--;
	}
}
