#include "main.h"

/**
 * _puts - the name of the function
 * @str: the parameter of function
 * Return: Always 0.
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
