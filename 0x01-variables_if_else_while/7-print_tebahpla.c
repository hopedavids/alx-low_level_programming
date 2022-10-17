#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Description : print the alphabeth in reverse using putchar
*
* Return: Always 0 for Success
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
