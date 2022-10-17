#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: print all combinations of single digits using putchar
 *
 * Return: Always 0 for Success
 */

int main(void)
{
	int comb;

	for (comb = '0'; comb <= '9'; comb++)
	{
		putchar(comb);

		if (comb != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
