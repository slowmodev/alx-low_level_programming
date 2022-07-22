#include "main.h"
#include <stdio.h>

/**
 * main - checks the code
 * @argc: counts the command line argument
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}
	printf('\n');
	return (0);
}
