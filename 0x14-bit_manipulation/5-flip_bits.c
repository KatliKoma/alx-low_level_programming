#include "main.h"
/**
 * flip_bits - returns number of bits needed to flip.
 * @n: first unsigned long int.
 * @m: second unsigned long int.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

