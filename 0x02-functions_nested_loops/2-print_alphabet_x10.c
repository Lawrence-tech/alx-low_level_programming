#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return : Always print a-z x10- success
 */
void print_alphabet_x10(void)
{
int alp;
int c = 0;
while (c < 10)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
c++;
_putchar('\n');
}
}
