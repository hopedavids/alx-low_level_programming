#include "main.h"

/**
 * int _isalpha(int c) - the function name
 * Description - 
 * will return an integer
 */
int _isalpha(int c)
{
        char i;

        for (i = 'a'; i <= 'z'; i++)
        {
                for (i = 'A'; i <= 'Z'; i++)

                        if (i != c)
                        {
                                return 1;
                        }
			else
				return (0);
        }
	return 0;
}

