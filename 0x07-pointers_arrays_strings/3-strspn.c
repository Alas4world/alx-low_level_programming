#include "main.h"

/**
 * _strspn - Function Name
 * @s: Parameter 1
 * @accept: Parameter 2
 *
 * Return: Characters content
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (k = 0 ; s[i] != accept[k] ; k++)
		{
			if (accept[k] == '\0')
				return (i);
		}
	}
	return (0);
}

