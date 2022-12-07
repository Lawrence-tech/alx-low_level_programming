/**
  *flip_bits - return number of bits that would need to be flipped
  *@n: fisrt number
  *@m: second number
  *Return: number of bits flip to convert no
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int lip = n ^ m;
	unsigned int count = 0;

	while (lip)
	{
		if (lip & 1ul)
			count++;
		lip = lip >> 1;
	}
	return (count);
}
