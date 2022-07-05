#include "main.h"

/**
 * _abs - function that returns the absolute value of an integer
 * @ab: integer input
 * Return: the absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
