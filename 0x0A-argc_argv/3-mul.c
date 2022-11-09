#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  *main - prints mult then new line
  *@argc: argument count
  *@argv: arument vector
  *Return: 0 success, otherwise error
  */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
