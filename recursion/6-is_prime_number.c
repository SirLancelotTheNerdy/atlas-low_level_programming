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

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (is_divisible(n, 3));
}
