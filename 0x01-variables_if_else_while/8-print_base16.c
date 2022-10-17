#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: printing out base16 in lowercase
 *
 * Return: Always 0 for success.
 */
int main(void)
{
	char ch;
	int b16;

	for (b16 = '0'; b16 <= '9'; b16++)
	{
		putchar(b16);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
