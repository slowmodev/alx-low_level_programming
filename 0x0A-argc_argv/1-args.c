#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments counter
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
