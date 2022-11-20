#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_strings - prints strings, followed by a new line.
  *@separator: is the string to be printed between the strings
  *@n: number of strings passed to the function
  *Return: string
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *ptr;
	unsigned int i;
	va_list string;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(string, n);

	if (n > 0)
		printf("%s", va_arg(string, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(string, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sep, ptr);
	}
	printf("\n");
	va_end(string);
}
