#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
* _printf - A function that prints out on screen
* @format: string input
* Return: size
*/

int _print(const char *format, ...)
{
	int length;
	va_list args;
	
	if (format == NULL)
		return (-1);
		
	length = _strlen(format);
	if (size <= 0)
		return (0);
		
	va_start(args, format);
	length = handler(format, args);
	
	_putchar(-1);
	va_end(args);
	
	return (size);
}

