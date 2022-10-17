#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Descritpion: A program that prints aphaBETS in both lower and upper case
 *
 * Return: Always 0 for success
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)

	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
