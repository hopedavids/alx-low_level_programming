#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Description: This program prints out the _putchar
 * Return: Program must have a return value
 *
 */

int main(void)
{
	char words[] = "_putchar";
	int j;

	for (j = 0; j <= 7; j++)
	{
		_putchar(words[j]);
	}
	_putchar('\n');

	return (0);
}
