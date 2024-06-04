#include "main.h"
/**
 *leet - encodes a string into 1337.
 *@l: pointer to string.
 *
 *Return: pointer to l.
 */
char *leet(char *l)
{
	int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

/*  scan through string */
	stringCount = 0;
	while (l[stringCount] != '\0')
/* check whether leetLetter is found */
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == l[stringCount])
			{
				l[stringCount] = leetNums[leetCount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (l);
}
