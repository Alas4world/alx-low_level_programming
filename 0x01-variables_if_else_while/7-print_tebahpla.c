#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: It prints all the single numbers of base 10 from 0.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'z' ; letter >= 'a' ; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);

}
