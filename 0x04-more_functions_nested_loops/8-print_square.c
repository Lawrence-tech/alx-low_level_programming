#include "main.h"

/**
 *print_square - prints a square.
 *@size: size of square.
 *Return: always 0.
 */

void print_square(int size)
{
	int c, r;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
