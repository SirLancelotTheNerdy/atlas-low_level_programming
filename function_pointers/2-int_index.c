#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an int
 * in array.
 *
 * @array: passed array from main.
 * @size: size of array.
 * @cmp: pointer to function.
 * Return: position of the int in
 * array.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int l;

	l = 0;
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	{
		while (l < size)
		{
			if (cmp(array[l]) != 0)
				return (l);
			l++;
		}
	}
	return (-1);
}
