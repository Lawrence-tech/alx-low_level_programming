#include "function_pointers.h"

/**
  *print_name - prints a name.
  *
  *Return: char
  */

void print_name(char *name, void (*f)(char *))
{
	_putchar(name);
}
