#include "main.h"
/**
 * _strlen - find the length of string
 *
 * Return: void
*/

int _strlen(char *l)
{
int i = 0;
while (l[i])
	i++;

return (i);
}
