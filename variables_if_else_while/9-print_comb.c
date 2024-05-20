#include <stdio.h>

/**
 * main - header prints the numbers.
 * Return: 0
 */

int main(void)
{
	int l;
	int o;

	for (l = 0 ; l <= 9 ; l++)

	{
		o = (l + 48);

		putchar(o);

	if (l != 9)
	{
		putchar(',');

		putchar(' ');
	}
	}
		putchar('\n');
return (0);
}
