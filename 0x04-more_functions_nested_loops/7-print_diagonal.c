#include "main.h"

/**
 * print_diagonal - prints \ diagonally
 * @n: number of times '\' will be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (sp = 1; sp < i; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
