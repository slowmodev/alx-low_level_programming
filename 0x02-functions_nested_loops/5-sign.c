#include "main.h"

/**
 * print_sign - prints the sign in a number
 * @n: is a a single character integer
 * Return: 1 if is positive, 0 if it's zero, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
