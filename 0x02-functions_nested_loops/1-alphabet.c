#include "main.h"

/**
 * print_alphabet - function name
 *
 * Description: print_alphabet computes the lowercase letters
 *
 * no return value or statements
 */

void print_alphabet(void)
{
	char game;

	for (game = 'a'; game <= 'z'; game++)
	{
		_putchar(game);
	}
	_putchar('\n');
}
