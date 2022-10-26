#include <stdio.h>
#include "main.h"

/**
  *print_array - prints n elements of an array of integers
  *@a: pointer to int
  *@n: pointer to other int
  *return: nothing
  */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
