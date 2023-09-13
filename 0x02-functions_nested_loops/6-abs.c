#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @i: integer to be checked
 *
 * Return: absolute value of i
 */
int _abs(int i)
{
	if (i < 0)
		i *= -1;

	return (i);
}
