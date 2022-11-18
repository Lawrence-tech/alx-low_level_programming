#include "3-calc.h"

/**
  *op_add - func to add
  *@a: input 1
  *@b: input 2
  *Return: sum a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - function that subtracts
  *@a: input 1
  *@b: input 2
  *Return: difference of a and b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - function that mulplies
  *@a: input 1
  *@b: input 2
  *Return: product of a and b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - function that divides
  *@a: input 1
  *@b: input 2
  *Return:division of a and b
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  *op_mod - modulus of two integers
  *@a: input 1
  *@b: input 2
  *Return: remainder of the division of a
  */

int op_mod(int a, int b)
{
	return (a % b);
}
