#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


/**
  *struct funck - a key for picking functions to use for printing
  *@f: function to use for printing
  *@spec: character specifier
  */

typedef struct funck
{
	void (*f)(va_list);
	char spec;
} funck;

#endif /* FUNCTIONS_H */
