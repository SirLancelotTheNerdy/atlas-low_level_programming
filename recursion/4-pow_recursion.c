#include "main.h"

/**
* _pow_recursion - Returns the value of x^ y
* @x: the value to multiply
* @y: the value of the exponent
* Return: the exponet of y 
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
