#include "main.h"
/**
 * puts2 - print a string, then a new line,
 * 
 * Return: void
*/

void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
	if (i % 2 == 0)
	{
		_putchar(str[i]);
	}

	i++;
}
_putchar('\n');
}
