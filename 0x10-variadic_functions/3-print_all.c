#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 * @format: List of types of arguments.
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * Any other char should be ignored
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *p = format;
	char *s;

	va_start(ap, format);

	while (p && *p)
	{
		switch (*p++)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;

			case 'i':
				printf("%d", va_arg(ap, int));
				break;

			case 'f':
				printf("%f", va_arg(ap, double));
				break;

			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;

			default:
				continue;
		}

		if (*p)
			printf(", ");
	}

	printf("\n");

	va_end(ap);
}
