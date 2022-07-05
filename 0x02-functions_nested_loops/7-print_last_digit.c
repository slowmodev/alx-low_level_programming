#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: single character integer
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	_putchar(lastDigit);

	return (0);
}
