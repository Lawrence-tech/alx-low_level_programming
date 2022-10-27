#include "main.h"

/**
  *_strcmp - compare two strings.
  *@s1: pointer to string
  *@s2: pointer to other string
  *Return: int
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int x;

	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
		{
			x = *(s1 + i) - *(s2 + i);
			return (x);
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			x = *(s1 + i) - *(s2 + i);
			return (x);
		}
		i++;
	}
	return (0);
}
