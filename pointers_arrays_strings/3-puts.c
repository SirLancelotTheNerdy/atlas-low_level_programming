#include "main.h"
/**
 * _puts - prints a string,then a new line,
 * 
 * Return: void
*/


void _puts(char *str)
{
int i = 0;
while (str[i])
{
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}
