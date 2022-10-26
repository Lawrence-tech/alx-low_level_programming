#include "main.h"

/**
  *_puts - print string and new line
  *@str: pointer to char
  *Return: always 0.
  */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
