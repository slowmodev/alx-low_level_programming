#include "main.h"

/**
 * print_line - print _
 * @n: input for number of '_' to print
 * Return: a straight line
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
