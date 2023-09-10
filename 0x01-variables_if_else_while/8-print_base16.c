#include <stdio.h>

/**
 * main  - Entry point
 *
 * Description: Program that prints numbers of base 10 in lowercase
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	int nums;

	for (nums = 0 ; nums <= 9 ; nums++)
	{
		putchar(nums + '0');
	}

	for (nums = 'a' ; nums <= 'f' ; nums++)
	{
		putchar(nums);
	}

	putchar('\n');

	return (0);

}
