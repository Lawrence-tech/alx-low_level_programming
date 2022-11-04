#include "main.h"
#include <stdio.h>

/**
  *is_prime_number - return 1for integer, 0 otherwise
  *@n: input
  *Return: int
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (getPrimNum(n, 2));
}

/**
  *getPrimNum - gets prim if num is 0 or 1
  *@num: input
  *@i: counter
  *Return: int
  */

int getPrimNum(int num, int i)
{
	if (num == i)
		return (1);
	if (num % i == 0)
		return (0);
	return (getPrimNum(num, i + 1));
}
