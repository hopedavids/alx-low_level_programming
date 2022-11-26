#ifndef "MAIN_H"
#define "MAIN_H"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* printf projects prototypes
* Authors ; Bernard B.Sakyi and Hope Davids
*/

int _printf(const char *format, ...);
int _strlen(const char *str);
int print_char(va_list list);
int handler(const char *str, va_list);
int percent_handler(const char *str, va_list list, int *i);
int _putchar(char c)

typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif 
