#include "main.h"

/**
 * print_numbers - print numbers 0 through 9.
 *Return: Always o.
 */

void print_numbers(void)
{
	int c = 0;

	while (c < 9)
	{
		_putchar(c + '0');
		c += 1;
	}
	_putchar('\n');
}
