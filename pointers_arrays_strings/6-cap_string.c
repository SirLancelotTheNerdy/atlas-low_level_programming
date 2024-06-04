#include "main.h"
/** 
*cap_string - capitalizes every first letter of a word in a string.
 *separators of words are:  space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */
char *cap_string(char *l)
{
	int count;

/*  scan through string */
	count = 0;
	while (l[count] != '\0')
	{/* if next character after count is a char , capitalise it */
		if (l[0] >= 97 && l[0] <= 122)
		{
			l[0] = l[0] - 32;
		}
		if (l[count] == ' ' || l[count] == '\t' || l[count] == '\n'
		    || l[count] == ',' || l[count] == ';' || l[count] == '.'
		    || l[count] == '.' || l[count] == '!' || l[count] == '?'
		    || l[count] == '"' || l[count] == '(' || l[count] == ')'
		    || l[count] == '{' || l[count] == '}')
		{
			if (l[count + 1] >= 97 && l[count + 1] <= 122)
			{
				l[count + 1] = l[count + 1] - 32;
			}
		}
		count++;
	}
	return (l);
}
