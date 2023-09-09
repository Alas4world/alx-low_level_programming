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
	int num;

	for (num = 0 ; num <= 9 ; num++)
	{
		printf("%d", num);
	}

	printf("\n");
	return (0);
}
