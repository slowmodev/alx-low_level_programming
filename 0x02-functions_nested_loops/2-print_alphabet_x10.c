#include "main.h"

/**
 * print_alphabet_x10 - prints a-z in 10 rows
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}
}
