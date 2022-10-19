#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
int n;
n = (nld % 10);
if (n < 0)
{
n = (-1 * n);
}
_putchar(n + '0');
return (n);
}
