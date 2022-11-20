#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_numbers - prints numbers, followed by a new line.
  *@separator: is the string to be printed between numbers
  *@n: number of arguments
  *Return: int
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int i;
	va_list nums;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(nums, n);

	if (n > 0)
		printf("%d", va_arg(nums, int));
	for (i = 1; i < n; i++)
		printf("%s%d", sep, va_arg(nums, int));
	printf("\n");
	va_end(nums);
}
