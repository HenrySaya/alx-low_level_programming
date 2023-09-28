#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line
 *
 * @s: string characters to be printed
 * Return:  Always void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
