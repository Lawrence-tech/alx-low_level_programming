#include <stdio.h>
#include "main.h"

/**
  *main - prints number of arguments passed
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 success
  */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argv = argv;
		printf("%d\n", argc - 1);
	}
	return (0);
}
