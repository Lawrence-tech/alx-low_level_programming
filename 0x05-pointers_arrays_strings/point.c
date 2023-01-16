#include <stdio.h>

/**
  *main - determine size of in machine
  *Return: void
  */

int main(void)
{
	int c;
	int *num;

	c = 98;
	num = &c;


	printf(" Size of 'char' is %lu bytes\n", sizeof(char));
	printf(" adress of 'c' is %p\n", &c);
	printf(" Size of 'int' is %lu bytes\n", sizeof(int));
	printf(" Adress of 'num' is %p\n", num);
	printf(" Size of 'float' is %lu bytes\n", sizeof(float));
	printf(" size of 2 variable is %lu btyes\n", sizeof(2));
}
