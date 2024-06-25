#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints name.
 * @name: input name.
 * @f: pointer to function.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
