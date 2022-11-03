#include "main.h"

/**
 * _print_rev_recursion - the function name, check code
 * @s: pointer to a variable whose datatype is a string
 * Return: Nothing.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
