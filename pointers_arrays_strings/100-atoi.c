#include "main.h"
/**
 * _atoi - convert a string to integers
 * the string that need to convert
 * Return: return the converted integer
 */
int _atoi(char *s)
{
	int i, j, f = 0, num, minus = 1;
	unsigned int sum = 0;

	for (i = 0; s[i] != '\0' && f != 2; i++)
	{
		if (s[i] == '-')
			minus = minus * -1;
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == (j + '0'))
			{
				num = j;
				sum = sum * 10 + num;
				f = 1;
			}
			else if (f == 1 && s[i] == ' ')
				f = 2;
		}
	}
	if (f == 0)
		return (0);
	return (sum * minus);

}
