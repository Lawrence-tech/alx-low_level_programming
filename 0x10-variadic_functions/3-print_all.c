#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_char - prints char
  *@list: argument list
  *@sep: separator
  *Return: none
  */

void print_char(va_list, char *sep)
{
	printf("%s%c", sep, va_arg(list, int));
}

/**
  *print_int - print int
  *@list: argument list
  *@sep: separator
  *Return: none
  */

void print_int(va_list list, char *s)
{
	printf("%s%d", s, va_arg(list, int));
}

/**
  *print_string - prints string
  *@list: argument list
  *@sep:separator
  *Return: none
  */

void print_string(va_list list, char *sep)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL0
			s = "(nil)";
			printf("%s%s", sep, s);
}

/**
  *print_float - prints float
  *@sep:separator
  *@list: argument list
  *Return: none
  */

void print_float(va_list list, char *sep)
{
printf("%s%f", sep, va_arg(list, double));
}


/**
  *print_all - prints anything.
  *@format: string containing type information for args.
  *Return: arguments.
  */

void print_all(const char * const format, ...)
{
	va_list list;
	int i, j;
	char *separator;

	type_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{"f", print_float},
		{NULL, NULL}
	};

	va_start(list, format);
	i = 0;
	separator = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(ops[j]).op)
			{
				ops[j].f(list, separator);separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n"0;
			va_end(list);
			}
