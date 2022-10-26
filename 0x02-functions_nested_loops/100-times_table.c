#include "main.h"
/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int row, col, mult;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				mult = row * col;
				if (col == 0)
				{
					_putchar(mult + 48);
				}
				else if (mult < 10 && col != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mult + 48);
				}
				else if (mult >= 10 && mult < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mult / 100) + 48);
					_putchar(((mult / 10) % 10) + 48);
					_putchar((mult % 10) + 48);
				}
				else if (mult >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mult / 100) + 48);
					_putchar(((mult / 10) % 10) + 48);
					_putchar((mult % 10) +48);
				}
			_putchar('\n');
		}
	}
}
}
