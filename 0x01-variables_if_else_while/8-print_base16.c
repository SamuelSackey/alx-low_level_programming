#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char str[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
		putchar(str[i]);

	putchar('\n');

	return (0);
}
