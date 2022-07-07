#include "main.h"

/**
 * print_numbers - function that prints 0 - 9 followed by a newline
 * Return: 0 always (Success)
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i);
		i++;
		_putchar('\n');
	}
}
