#include "main.h"

/**
 * _isalpha - the function name
 * @c: describes the code parameter
 * Return: will return an integer
 */
int _isalpha(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
		else
			return (0);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
		else
			return (0);
	}
	return (0);
}

