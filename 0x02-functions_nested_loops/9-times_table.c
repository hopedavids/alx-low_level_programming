#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int zero, num, prod;

	for (zero = 0; zero <= 9; zero++)
	{
		_putchar('0');

		for (num = 1; num <= 9; num++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * zero;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');

		}
		_putchar('\n');
	}

}
