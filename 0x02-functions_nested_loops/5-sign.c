#include "main.h"

/**
 * print_sign - Function that prints the sign of a number
 *
 * @n: integer to be checked
 *
 * Return: 1 if greater than 0, 0 equal zero & -1 less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
