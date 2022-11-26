#include "main.h" 

/**
*handler - controlls the format passed into the _print function
*@str: string format
*@list: contains List of arguments passed
* Return: total size of arguments with the total size of base string
*/

int handler(const char *str, va_list);
{
	int i, size, v;

	size = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			v = percent_handler(str, list, &i);
			if (v == -1)
				return (-1);

			size += v;
			continue;
		}

		_putchar(str[i]);
		size = size + 1;	
	}

	return (size);
}

/**
* percent_handler - controlls the format passed into the _print function
* @str: string format
* @list: contains List of arguments passed
* @i: pointer to the position of a particular char among a string in memory
* Return: total size of arguments with the total size of base string
*/

int percent_handler(const char *str, va_list list, int *i)
{
	int size, k, num_formats;
	format formats[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}
	
	num_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = k = 0; j < num_formats; k++)
	{
		if (str[*i] == formats[k].type)
		{
			size = formats[k].f(list);
			return (size);
		} 
	}
	
	_putchar('%'), _putchar(str[*i])
	
	return (2);
}




























