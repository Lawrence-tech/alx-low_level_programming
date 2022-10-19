#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: single letter inputed
 * Return: 1 if c is lower, 0 otherwise.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
