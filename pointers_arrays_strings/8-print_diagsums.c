#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print additions of the two diagonals.
 *
 * Return: chessboard.
 */
void print_diagsums(int *b, int size)
{
	int i, k, sumdiag1 = 0, sumdiag2 = 0, step1, step2;

	for (i = 0; i <= (size - 1); i++)
	{
		step1 =  (size + 1) * i;
		sumdiag1 = sumdiag1 + *(b + step1);
	}

	for (k = 1; k <= size; k++)
	{
		step2 = (size - 1) * k;
		sumdiag2 = sumdiag2 + *(b + step2);
	}
	printf("%d, %d\n", sumdiag1, sumdiag2);
}
