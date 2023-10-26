#include "main.h"
/**
 * flip_bits - function that  returns the number of bits
 *
 *@n: ulint first number
 *@m:ulint second number
 * Return:numbr of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int and;
	unsigned int counter = 0;

	and = n ^ m;
	while (and != 0)
	{
		counter += and & 1;
		and >>= 1;
	}
	return (counter);
}
