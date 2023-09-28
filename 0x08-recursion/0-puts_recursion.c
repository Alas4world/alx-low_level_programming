#include "main.h"

/**
 * _puts_recursion - Function Name
 * @s: parmeter to check
 * Return: s
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
