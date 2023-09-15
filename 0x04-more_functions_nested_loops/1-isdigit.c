#include "main.h"

/**
 * _isdigit - functions that check for a digit
 *
 * @c: Value to check
 *
 * Return:returns 1 if is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
