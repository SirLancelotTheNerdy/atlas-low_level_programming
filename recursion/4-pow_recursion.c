#include "main.h"
/**
 * _pow_recursion - finding the value of a num to the power of another.
 * @base: number given by main.
 * @expo: decreasing while the base stays the same.
 *
 * Return: square root.
 */

int _pow_recursion(int base, int expo)
{
	if (expo < 0)
	{
		return (-1); /* Return -1 for negative exponent */

	}
	else if (expo == 0)
	{
		return (1); /* Base case: any number to the power of 0 is 1*/
	}
	else
	{
		return (base * _pow_recursion(base, expo - 1)); /* Recursion */
	}
}
