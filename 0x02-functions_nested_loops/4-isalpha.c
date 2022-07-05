#include "main.h"

/**
 * _isalpha - function to check if c is an alphabet
 * @c: single character
 * Return: 1 if c is an alphabet, 0 if other
 */
int _isalpha(int c)
{
	if ((_islower(c)) || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
