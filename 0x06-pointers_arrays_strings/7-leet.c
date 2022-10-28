#include "main.h"

/**
  *leet - encodes a string into 1337.
  *@p: pointer to char
  *Return: cha
  */

char *leet(char *p)
{
	int i = 0;
	int j = 0;
	char *l = "aAeEoOlLtT";
	char *n = "4433001177";

	while (*(p + i) != '\0')
	{
		while (*(l + j) != '\0')
		{
			if (*(p + i) == *(l + j))
				*(p + i) = *(n + j);
			j++;
		}
		j = 0;
		i++;
	}
	return (p);
}
