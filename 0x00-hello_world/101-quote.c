#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main- this is the main function
 * Return: 0
 */
int main(void)
{
	ssize_t written = write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	if (written == -1) {
		perror("write");
		return 1;
	}
}
