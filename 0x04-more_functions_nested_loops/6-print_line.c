#include "main.h"
/**
 * print_line - function that draws a straight line
 *
 * @n: number of times the character _ should be printed
 * Return: no return
 */
void print_line(int n)
{
	if (n == 0)
	{
		_putchar(10);
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar(10);
	}
}
