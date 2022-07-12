#include "main.h"

/**
 * swap_int - swap the value of ints
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
