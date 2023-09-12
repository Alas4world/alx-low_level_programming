#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while(str[i])
	{putchar(str[i]);
		i++;
	}

	putchar(10);

	return (0);

}
