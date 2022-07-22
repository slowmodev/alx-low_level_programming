#include "main.h"
#include <stdio.h>

/**
 * main - checks the code
 * @argc: counts the command line argument
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	printf('\n');
	return (0);
}
