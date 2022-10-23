#include "main.h"

/**
 * print_triangle - prints a triangle.
 *@size: size of triangle.
 *Return: nothing 
 */

void print_triangle(int size)
{
	int row, col, aux;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				aux = (size - row) - 1;
				if (col < aux)
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

