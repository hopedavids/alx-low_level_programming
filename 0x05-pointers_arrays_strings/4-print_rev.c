#include "main.h"
#include <stdio.h>

/**
 * print_rev - the function name
 * @s: the parameter name
 * Return: returns nothing
 */
void print_rev(char *s)
{
	int c;
	
	while (s[c] != '\0')
	{
		c++;
	}
	
	for (c -= 0; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
