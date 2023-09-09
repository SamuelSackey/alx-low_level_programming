#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i > -1; i--)
		putchar(str[i]);

	putchar('\n');

	return (0);
}
