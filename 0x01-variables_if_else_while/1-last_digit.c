#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number and prints its last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	lastdigit = n % 10;

	printf("Last digit of %d is %d and is ", n, lastdigit);

	if (lastdigit > 5)
	{
		printf("greater than 5\n");
	}
	else if (lastdigit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}

