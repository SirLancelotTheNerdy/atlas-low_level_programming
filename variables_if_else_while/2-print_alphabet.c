#include <stdio.h>

/**
 * main - var named 'l' prints letters.
 * Return: 0
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
