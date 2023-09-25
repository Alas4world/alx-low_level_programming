#include "main.h"

/**
 * _strchr - Function Name
 * @s: Parameter 1
 * @c: Parameter 2
 * Return: first occurrence of 'c' in 's', or NULL if 'c' is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
