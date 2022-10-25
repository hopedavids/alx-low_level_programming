#include "main.h"

/**
 * swap_int - the name of the function
 * @a: the first parameter in the function
 * @b: the second parameter in the function
 * Return: no return value.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;

	*a = *b;
	*b = n;
}
