#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 *
 * @n:  number of times the character \ should be printed
 * Return: no return
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
