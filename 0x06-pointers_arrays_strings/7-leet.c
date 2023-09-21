#include "main.h"
#include <stdio.h>

/**
 * leet - Replace certain characters in a string with leet speak equivalents.
 * @n: The input string to modify.
 *
 * Return: A pointer to the modified string `n`.
 */
char *leet(char *n)
{
	int i;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
				break;
			}
		}
	}
	return (n);
}
