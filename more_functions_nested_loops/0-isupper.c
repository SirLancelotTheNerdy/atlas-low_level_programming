#include "main.h"

/**
 * _isupper - defines a character's case 
 *
 * Description: Prints alphabet with _putchar
 * @c: charater
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
