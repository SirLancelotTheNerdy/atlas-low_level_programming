#include <stdio.h>

/**
 * main - header prints the numbers.
 * Return: 0
 */

int main(void)
{
	int l;
	int o;
	char v;

	for (l = 0 ; l <= 9 ; l++)

	{
		o = (l + 48);

		putchar(o);

	}
	for (v = 'a' ; v <= 'f' ; v++)
	{
		putchar(v);
	}
	putchar('\n');
return (0);
}
