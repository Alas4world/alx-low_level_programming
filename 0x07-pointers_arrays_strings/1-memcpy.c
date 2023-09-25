#include "main.h"

/**
 * _memcpy - Function Name
 * @dest: Parameter 1
 * @src: Paramete 2
 * @n: Parameter 3
 * Return: dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
