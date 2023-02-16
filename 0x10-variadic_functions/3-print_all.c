#include "variadic_functions.h"
#include <stdio.h>

/**
  *print_char - prints char
  *@list: argument list
  */

void print_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
  *print_int - print int
  *@list: argument list
  */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
  *print_string - prints string
  *@list: argument list
  *Return: none
  */

void print_string(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
  *print_float - prints float
  *@list: argument list
  *Return: none
  */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}


/**
  *print_all - prints anything.
  *@format: string containing type information for args.
  *Return: arguments.
  */
void print_all(const char * const format, ...)
{
	va_list list;
	const char *ptr;
	int keyind = 0, notfirst = 0;
	funck key[4] = {
		{print_char, 'c'},
		{print_int, 'i'},
		{print_string, 's'},
		{print_float, 'f'},
	};

	va_start(list, format);
	ptr = format;
	while (format != NULL && *ptr != '\0')
	{
		if (keyind > 3)
			break;
		if (key[keyind].spec == *ptr)
		{
			if (notfirst)
				printf(", ");
			notfirst = 1;
			key[keyind].f(list);
			keyind = -1;
		}
		ptr++;
		keyind++;
	}
	va_end(list);
	printf("\n");
}
