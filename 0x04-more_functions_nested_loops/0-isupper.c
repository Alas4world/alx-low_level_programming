#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: Checks the charcter c
 * Return: returs 1 if c is uppercase , 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
