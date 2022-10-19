#include "main.h"

/**
 * print_alphabet_x10 - function name
 *
 * Description: print_alphabet computes the lowercase letters
 *
 * no return value or statements
 */

void print_alphabet_x10(void)
{
	char game;
	int c;

	for (c = 0; c <= 9; c++)
	{
		for (game = 'a'; game <= 'z'; game++)
			_putchar(game);
		_putchar('\n');

	}
}
