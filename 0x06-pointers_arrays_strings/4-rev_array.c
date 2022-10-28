#include "main.h"

/**
  *reverse_array - reverses the content of an array of integers
  *@a: an array of integers
  *@n: the number of elements to swap
  *Return: nothing
  */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *init, *final;
	int freq = 0;

	init = a;
	final = a;
	n -= 1;
	while (i < n)
		i++;
	while (j <= i)
	{
		freq = *(init + j);
		*(init + j) = *(final + i);
		*(final + i) = freq;
		j++;
		i--;
	}
}
