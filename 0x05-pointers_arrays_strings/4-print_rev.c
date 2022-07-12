#include "main.h"

/**
 * print_rev - function that reverses a string
 * @s: string
 */

void print_rev(char *s)
{
	char rev;
	int i, j, count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	j = count - 1;
	for (i = 0; i < count; i++)
	{
		rev[i] = s[j];
		j--;
	}
}
