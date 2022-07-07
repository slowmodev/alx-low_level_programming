#include "main.h"

/**
 * _isdigit - function to check if a character is a digit
 * @c: single character
 * Return: 1 if c is a number (0 - 9), 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
