#include "main.h"
/**
 * flip_bits - returns the number of bits you flip
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}