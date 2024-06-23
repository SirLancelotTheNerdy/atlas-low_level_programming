#include "main.h"
/**
 * finder - searches before and after the number.
 * @n: given by main.
 * @top: end
 * @bottom: start
 *
 * Return: returns natural square root.
 */
int finder(int n, int bottom, int top)
{
	int md;

	if (bottom > top)
	{
		return (-1);
	}
	md = bottom + ((top - bottom) / 2);

	if (md * md == n)
	{
		return (md);
	}
	else if (md * md < n)
	{
		return (finder(n, md + 1, top));
	}
	else
	{
		return (finder(n, bottom, mid - 1));
	}
}
