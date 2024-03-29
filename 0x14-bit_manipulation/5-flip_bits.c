#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * needed to flip to get from one number to another
 *
 * @n: first number to compare
 * @m: the second number to compare
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
