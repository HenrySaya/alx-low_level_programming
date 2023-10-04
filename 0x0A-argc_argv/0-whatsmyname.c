#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print file name
 *
 * @argc: count arguments
 * @argv: print programs name
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
