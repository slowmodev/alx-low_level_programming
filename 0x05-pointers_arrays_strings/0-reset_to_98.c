#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int as parameter and updates the value it points to to 98
 * @n: pointer to an int
 */

void reset_to_98(int *n)
{
	int number1;

	n = &number1;
	*n = 98;


}
