#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char cap;

	for(c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for(cap = 'A'; cap <= 'Z'; ++cap)
		putchar(cap);
	putchar('\n');
	return (0);
}
