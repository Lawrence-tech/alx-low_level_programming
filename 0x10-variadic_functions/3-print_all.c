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
	char *str;

	str = va_arg(list, char *);

	while (str != NULL)
	{
		printf("%s", str);
		return;
	}

/**
  *print_float - prints float
  *@list: argument list
  *Return: none
  */

void print_float(va_list list)
{
	printf("%f", (float) va_arg(list, double));
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

	funck key[4] = { {print_char, 'c'}, {print_int, 'i'},
		{print_string, 's'}, {print_float, 'f'} };
	int keyind = 0, notfirst = 0;

	ptr = format;
	va_start(list, format);
	while (format != NULL && *ptr)
	{
		if (key[keyind].spec == *ptr)
		{
			if (notfirst)
				printf(" ,");
			notfirst = 1;
			key[keyind].f(list);
			ptr++;
			keyind = -1;
		}
		keyind++;
		ptr += keyind / 4;
		keyind %= 4;
	}
	va_end(list);
	printf("\n");
}
}
