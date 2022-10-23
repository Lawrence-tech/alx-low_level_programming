#include <stdio.h>

/**
 *main - prints the numbers from 1 to 100.
 *But for multiples of three print Fizz
 *and for the multiples of five print Buzz
 *multiples of both three and five print FizzBuzz
 *Return: the numbers.
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");
		else if (n % 3 == 0 && n % 5 !=0)
			printf("Fizz ");
		else if (n == 100 )
			printf ("Buzz");
		else if (n % 5 == 0 && n % 3 != 0)
			printf("Buzz ");
		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
