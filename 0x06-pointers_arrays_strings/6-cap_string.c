#include "main.h"

/**
  *cap_string - capitalizes all words of a string.
  *@ptr: pointer to char
  *Return: char
  */

char *cap_string(char *ptr)
{
	int i = 0;

	while (*(ptr + i) != '\0')
	{
		if (i == 0)
			*(ptr + i) = *(ptr + i) - ' ';
		if (*(ptr + i) == ' ' || *(ptr + i) == '\t')
			i++;
		else if (*(ptr + i) == '\n' || *(ptr + i) == ',')
			i++;
		else if (*(ptr + i) == ';' || *(ptr + i) == '.')
			i++;
		else if (*(ptr + i) == '!' || *(ptr + i) == '?')
			i++;
		else if (*(ptr + i) == '"' || *(ptr + i) == '(')
			i++;
		else if (*(ptr + i) == ')' || *(ptr + i) == '{')
			i++;
		else if (*(ptr + i) == '}')
			i++;
		if (*(ptr + i) >= 97 && *(ptr + i) <= 122)
		{
			*(ptr + i) = *(ptr + i) - ' ';
			i++;
		}
	}
	return (ptr);
}
