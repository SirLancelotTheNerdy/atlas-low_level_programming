#include "main.h"
/**
 * set_bit - sets the value of bit to 1
 * @n: pointer to unsigned int
 * @index: index
 * Return: 1 if worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	*n |= mask;

	return (1);
}