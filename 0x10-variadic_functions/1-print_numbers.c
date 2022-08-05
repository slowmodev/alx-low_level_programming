#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/** print_numbers - prints numbers followed by a newline
 * @seperator: a string to seperate numbers
 * @n: number of integers to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (seperator && i != (n - 1))
			printf("%s", seperator);
	}
	va_end(p);
	printf("\n");
}
