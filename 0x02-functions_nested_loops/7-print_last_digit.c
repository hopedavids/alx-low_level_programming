#include "main.h"

/**
 * print_last_digit - check the code
 * @r: initial variable
 * Return: Always 0.
 */

int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);

	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
