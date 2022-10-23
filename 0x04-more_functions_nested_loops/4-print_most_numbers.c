#include "main.h"

/**
 *print_most_numbers - print numbers 0,1,3,5-9.
 *Return: numbers except 2 and 4.
 */

void print_most_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c != 2 && c != 4)
			_putchar(c + '0');
			c += 1;
	}
		_putchar('\n');
}
