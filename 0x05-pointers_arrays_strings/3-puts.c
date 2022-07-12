#include "main.h"

/**
 * _puts - function to print a string followed by \n
 * @str: character string
 */

void _puts(char *str)
{
	
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
