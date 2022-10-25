#include "main.h"

/**
  * puts_half - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: void
  */
void puts_half(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0 + 5; i < j; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

