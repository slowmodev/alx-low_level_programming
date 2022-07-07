#include "main.h"

/**
 * print_numbers - function that prints 0 - 9 followed by a newline
 * Return: 0 always (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
