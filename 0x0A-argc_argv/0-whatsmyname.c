#include <stdio.h>
#include "main.h"

/**
  *main - program that prints its name
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 success, error otherwise
  */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
