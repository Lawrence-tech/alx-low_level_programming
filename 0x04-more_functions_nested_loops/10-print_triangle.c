#include "main.h"

/**
 * print_triangle - prints a triangle.
 *@size: input.
 *Return: always 0.
 */

void print_triangle(int size)
{
	int r, c, aux;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
			{
				aux = (size - row) - 1;
				if (c < aux)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

