#include "main.h"

/**
 *print_line - draws a straight line in the terminal.
 *@n: input
 *Return: 0 always.
 */

void print_line(int n)
{
	int c = 0;

	while (c < n)
	{
		if (n > 0)
		{
			_putchar(95);
			c += 1;
		}
		else
			_putchar('\n');
	}
	_putchar('\n');
}
