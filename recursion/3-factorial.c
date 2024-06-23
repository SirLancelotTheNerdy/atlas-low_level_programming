#include "main.h"
/**
 * factorial - factorial of a given number.
 * @n: specified number in main.
 * 
 * Return: other then 1, it will return
 * the answer.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
