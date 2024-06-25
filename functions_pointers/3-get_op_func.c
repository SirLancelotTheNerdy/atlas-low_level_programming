#include "3-calc.h"
/**
 * get_op_func - knows which op the user is trying to use.
 * 
 * @s: operator
 *
 * Return: the correct corresponding operator.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int l;
	
	l = 0;
	while (ops[l].op != NULL)
	{
		if (strcmp(s, ops[l].op) == 0)
			return (ops[l].f);
		l++;
	}
	return (NULL);
}
