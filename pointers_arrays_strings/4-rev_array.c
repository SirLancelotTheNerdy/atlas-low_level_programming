#include "main.h"
/**
 *reverse_array - reverese an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */
void reverse_array(int *l, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = l[counter];
		l[counter++] = l[n];
		l[n--] = temp;
	}
}
