#include "main.h"

/**
 * is_divisible - Checks if a number is divisible by number.
 * @n: The number checked.
 * @d: The divisor.
 *
 * Return: is divisible - 0.
 *         not divisible - 1.
 */
int is_divisible(int n, int d)
{
	if (d * d > n)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (is_divisible(n, d + 1));
}
