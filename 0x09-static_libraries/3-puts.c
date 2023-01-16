#include "main.h"

/**
  *_puts - puts a string then new line
  *@str: string to print
  *Return: void
  */

void _puts(char *sh)

{

		int i;

		for (i = 0; sh[i] != '\0'; i++)
			_putchar(sh[i]);
		_putchar('\n');
}
