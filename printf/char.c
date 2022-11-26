#include "main.h"

/**
* print_char - print char.
* @list: va_list.
*
* Return: 1
*/
int print_char(va_list list)
{
	int cont;

	cont = va_arg(list, int);

	_putchar(cont);

	return (1);
}
